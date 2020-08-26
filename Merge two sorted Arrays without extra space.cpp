// Merging two sorted arrays with O(1)
// extra space
#include <bits/stdc++.h>
using namespace std;
void method2(int arr1[], int arr2[], int n, int m)
{
	// consider each element X[i] of array X and ignore the element
	// if it is already in correct order else swap it with next smaller
	// element which happens to be first element of Y
	for (int i = 0; i < n;  i++)
	{
		// compare current element of X[] with first element of Y[]
		if (arr1[i] > arr2[0])
		{
			swap(arr1[i], arr2[0]);
			int first = arr2[0];

			// move Y[0] to its correct position to maintain sorted
			// order of Y[]. Note: Y[1..n-1] is already sorted
			int k;
			for (k = 1; k < n && arr2[k] < first; k++) {
				arr2[k - 1] = arr2[k];
			}

			arr2[k - 1] = first;
		}
	}
	cout<<"Method 2"<<endl;
	for (int i = 0; i < n; i++) {
		cout << arr1[i] << " ";
	}
	cout<<endl;
	for (int i = 0; i < m; i++) {
		cout << arr2[i] << " ";
	}
	cout<<endl;
}
int nextGap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}
void method3(int *arr1, int *arr2, int n, int m)
{
    int i, j, gap = n + m;
    for (gap = nextGap(gap); gap > 0; gap = nextGap(gap))
    {
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);

        //comparing elements in both arrays.
        for (j = gap > n ? gap-n : 0 ; i < n&&j < m; i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);

        if (j < m)
        {
            //comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
    }
    cout<<"Method 3"<<endl;
    for (int i = 0; i < n; i++) {
		cout << arr1[i] << " ";
	}
	cout<<endl;
	for (int i = 0; i < m; i++) {
		cout << arr2[i] << " ";
	}
	cout<<endl;
}
int main()
{
	int arr1[] = { 1, 4, 7, 8, 10 };
	int arr2[] = { 2, 3, 9 };
	int n = sizeof(arr1) / sizeof(arr1[0]);
	int m = sizeof(arr2) / sizeof(arr2[0]);
	// Method 1 is just use a temp array copy elements of both arrays in it and sort the temp array and put back elements into arr1 and arr2.
	method2(arr1, arr2, n, m);
	method3(arr1, arr2, n, m);
	return 0;
}
