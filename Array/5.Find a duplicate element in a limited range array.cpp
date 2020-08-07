#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int esum = n*(n-1)/2;
    cout<<"duplicate is "<<sum-esum;
    return 0;
}
