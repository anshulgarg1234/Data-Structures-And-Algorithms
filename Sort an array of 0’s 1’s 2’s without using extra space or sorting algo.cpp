#include <bits/stdc++.h>
using namespace std;
void better(int arr[], int n)
{
    int i, cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (i = 0; i < n; i++) {
        switch (arr[i]) {
        case 0:
            cnt0++;
            break;
        case 1:
            cnt1++;
            break;
        case 2:
            cnt2++;
            break;
        }
    }
    i = 0;
    while (cnt0 > 0) {
        arr[i++] = 0;
        cnt0--;
    }
    while (cnt1 > 0) {
        arr[i++] = 1;
        cnt1--;
    }
    while (cnt2 > 0) {
        arr[i++] = 2;
        cnt2--;
    }
}
void optimal(int arr[], int n)
{
	int low = 0;
	int high = n - 1;
	int mid = 0;
	while (mid <= high) {
		switch (arr[mid]) {
		case 0:
			swap(arr[low++], arr[mid++]);
			break;
		case 1:
			mid++;
			break;
		case 2:
			swap(arr[mid], arr[high--]);
			break;
		}
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}
int main()
{
	int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	// Naive approach is just sort the array.
	better(arr, n); //counting sort.
	optimal(arr, n); //dutch national flag algorithm.
	return 0;
}
