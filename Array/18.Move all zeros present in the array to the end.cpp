#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = { 6, 0, 8, 2, 3, 0, 4, 0, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int j = 0;
	for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
	}
	for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
	}
	return 0;
}
