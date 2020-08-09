#include <bits/stdc++.h>

int findProduct(int arr[], int n, int left, int i)
{
	if (i == n)
		return 1;
	int curr = arr[i];
	int right = findProduct(arr, n, left * arr[i], i + 1);
	arr[i] = left * right;
	return curr * right;
}

int main(void)
{
	int arr[] = { 5, 3, 4, 2, 6, 8 };
	int n = sizeof(arr) / sizeof(arr[0]);
	findProduct(arr, n, 1, 0);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}
