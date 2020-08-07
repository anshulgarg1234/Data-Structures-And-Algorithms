#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,0,1,0,1,0,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count0 = 0;
    for(int i = 0; i < n ; i++){
        if(arr[i]==0){
            count0++;
        }
    }
    int k = 0;
    while(count0--){
        arr[k++]=0;
    }
    while(k < n){
        arr[k++]=1;
    }
    cout<<"Sorted Array is ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
