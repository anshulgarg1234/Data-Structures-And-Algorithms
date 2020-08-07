#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << '\n';
}
int main()
{
    int arr1[] = {1,4,7,8,10};
    int arr2[] = {2,3,9};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    for(int i = 0; i < n1; i++){
        if(arr1[i] > arr2[0]){
            swap(arr1[i], arr2[0]);
            int key = arr2[0];
            int j;
            for(j = 1; j < n2 && arr2[j] < key; j++){
                arr2[j-1] = arr2[j];
            }
            arr2[j-1] = key;
        }
    }
    cout << "X: "; printArray(arr1, n1);
	cout << "Y: "; printArray(arr2, n2);
	return 0;
}
