#include<bits/stdc++.h>
using namespace std;
void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i < n; i += 2)
	{
		if (arr[i - 1] > arr[i]) {
			swap(arr, i-1, i);
		}
		if (i + 1 < n && arr[i + 1] > arr[i]) {
			swap(arr, i+1, i);
		}
	}
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
