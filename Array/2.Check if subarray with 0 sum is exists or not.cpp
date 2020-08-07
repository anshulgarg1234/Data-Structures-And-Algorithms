#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,4,-7,3,1,3,1,-4,-2,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = true;
    unordered_set<int> s;
    s.insert(0);
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += arr[i];
        if(s.find(sum) != s.end()){
            cout<<"Subarray exists";
            flag = false;
            break;
        }
        s.insert(sum);
    }
    if(flag){cout<<"Subarray does not exists";}
    return 0;
}
