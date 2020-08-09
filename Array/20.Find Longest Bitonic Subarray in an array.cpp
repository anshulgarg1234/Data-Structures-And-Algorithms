#include <stdio.h>
#include <stdlib.h>
void findBitonicSubarray(int A[], int n)
{
	int end_index = 0, max_len = 0;
	int i = 0;
	while (i + 1 < n)
	{
		int len = 1;
		while (i + 1 < n && A[i] < A[i + 1])
			i++, len++;
		while (i + 1 < n && A[i] > A[i + 1])
			i++, len++;
		if (len > max_len)
		{
			max_len = len;
			end_index = i;
		}
	}
	printf("The length of longest bitonic sub-array is %d\n", max_len);
	printf("The longest bitonic sub-array is [%d, %d]",
			end_index - max_len + 1, end_index);
}

int main(void)
{
	int A[] = { 3, 5, 8, 4, 5, 9, 10, 8, 5, 3, 4 };
	int n = sizeof(A) / sizeof(A[0]);
	findBitonicSubarray(A, n);
	return 0;
}
