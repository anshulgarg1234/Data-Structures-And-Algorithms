#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-10,-3,5,6,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max1 = arr[0], max2 = INT_MAX, min1 = arr[0], min2 = INT_MIN;
    for(int i = 1; i < n; i++){
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2){
            max2 = arr[i];
        }
        if(min1 > arr[i]){
            min2 = min1;
            min1 = arr[i];
        }
        else if(min2 > arr[i]){
            min2 = arr[i];
        }
    }
    if(max1*max2 > min1*min2){
        cout<<"Pair is ("<<max1<<", "<<max2<<")";
    }
    else{
        cout<<"Pair is ("<<min1<<", "<<min2<<")";
    }
    return 0;
}
