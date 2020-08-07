#include<bits/stdc++.h>
using namespace std;
void swap(int A[], int i, int j) {
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}
int main()
{
    int arr[] = {0,1,2,2,1,0,0,2,0,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high){
        switch(arr[mid]){
        case 0:
            swap(arr, low++, mid++);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr, mid, high--);
        }
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
