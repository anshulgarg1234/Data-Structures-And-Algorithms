#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 56, 58, 57, 90, 92, 94, 93, 91, 45};//for duplicates we can use hashing.
    int n = sizeof(arr)/sizeof(arr[0]);
    int max_len = 1;
    int start = 0, end_index = 0;
    for(int i = 0; i < n - 1; i++){
        int mn = arr[i], mx = arr[i];
        for(int j = i + 1; j < n; j++){
            mn = min(mn, arr[j]);
            mx = max(mx, arr[j]);
            if((mx - mn) == j - i){
                if(max_len < mx-mn+1){
                    start = i ;
                    end_index = j ;
                }
                max_len = max(max_len, mx - mn + 1);
            }
        }
    }
    cout<<"Largest Subarray is ["<<start<<".."<<end_index<<"]"<<" and length is "<<max_len;
    return 0;
}
