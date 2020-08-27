#include<bits/stdc++.h>
using namespace std;
int binomialCoefficient(int n, int r)
{
    int res = 1;
    if(r > n - r){
        r = n - r;
    }
    for(int i = 0; i < r; i++){
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
void brute(int n)
{
    cout<<"Brute - "<<endl;
    for(int line = 0; line < n; line++){
        for(int i = 0; i <= line; i++){
            cout<<binomialCoefficient(line, i)<<" ";
        }
        cout<<endl;
    }
}
void better(int n)
{
    cout<<"Better - "<<endl;
    int res[n][n];
    for(int line = 0; line < n; line++){
        for(int i = 0; i <= line; i++){
            if(line == i || i == 0){
                res[line][i] = 1;
            }
            else{
                res[line][i] = res[line - 1][i - 1] + res[line - 1][i];
            }
            cout<<res[line][i]<<" ";
        }
        cout<<endl;
    }
}
void optimal(int n)
{
    cout<<"Optimal - "<<endl;
    for(int line = 1; line <= n; line++){
        int C = 1;
        for(int i = 1; i <= line; i++){
            cout<<C<<" ";
            C = C *( line - i) / i;
        }
        cout<<endl;
    }
}
int main()
{
    brute(5);
    better(6);
    optimal(7);
    return 0;
}
