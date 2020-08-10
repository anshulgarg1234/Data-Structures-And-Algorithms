#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = { 2, 7, 9, 5, 1, 3, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int diff = INT_MIN;
	int max_so_far = arr[n-1];
	for(int i = n-2; i>=0; i--){
        if(arr[i] > max_so_far){
            max_so_far = arr[i];
        }
        else{
            diff = max(diff, max_so_far - arr[i]);
        }
	}
	cout<<diff;
	return 0;
}
