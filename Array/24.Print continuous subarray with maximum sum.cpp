#include<iostream>
#include<climits>
using namespace std;

void maxSubArraySum(int a[], int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0;
    int start = 0, end_index = 0, beg = 0;
	for (int i = 0; i < size; i++)
	{
		max_ending_here = max_ending_here + a[i];
        if (max_ending_here < 0){
            max_ending_here = 0;
            beg = i + 1;
        }

		if (max_so_far < max_ending_here){
			max_so_far = max_ending_here;
			start = beg;
			end_index = i;
		}
	}
	for(int i = start; i <= end_index; i++){
        cout<<a[i]<<" ";
	}
}

int main()
{
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(a)/sizeof(a[0]);
	maxSubArraySum(a, n);
	return 0;
}
