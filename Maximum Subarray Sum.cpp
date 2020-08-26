#include<bits/stdc++.h>
using namespace std;
void method1(int arr[], int n)
{
    cout<<"Method 1"<<endl;
    int maxs = INT_MIN;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i + 1; j < n; j++){
            sum += arr[j];
            maxs = max(maxs, sum);
        }
    }
    cout<<maxs<<endl;
}
void method2(int arr[], int n)
{
    cout<<"Method 2"<<endl;
    int sum = 0;
    int maxs = INT_MIN;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        maxs = max(sum, maxs);
        if(sum < 0){
            sum = 0;
        }
    }
    cout<<maxs<<endl;
}
int main()
{
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    method1(arr, n); // Naive method - quadratic time complexity.
    method2(arr, n); // Kadane's Algorithm.
    return 0;
}
