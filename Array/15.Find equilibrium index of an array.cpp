#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0, -3, 5, -4, -2, 3, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int right_sum = 0;
    for(int i = n - 1; i >= 0; i--){
        if(right_sum == sum - (arr[i] + right_sum)){
            cout<<"Equilibrium found at index "<<i<<endl;
        }
        right_sum += arr[i];
    }
    return 0;
}
