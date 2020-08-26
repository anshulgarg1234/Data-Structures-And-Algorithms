#include <bits/stdc++.h>
using namespace std;
void method2(int arr[], int n)
{
    cout<<"Method 2"<<endl;
	int i;
	int temp[n];
	for(int i = 0; i < n; i++){
        temp[i] = arr[i];
	}
	cout << "The repeating element is ";
	for (i = 0; i < n; i++) {
		if (arr[abs(arr[i]) - 1] > 0)
			arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
		else
			cout << abs(arr[i]) << endl;
	}

	cout << "and the missing element is ";
	for (i = 0; i < n; i++) {
		if (arr[i] > 0)
			cout << (i + 1) << endl;
	}
	for(int i = 0; i < n; i++){
        arr[i] = temp[i];
	}
}
void method3(int arr[], int n) {
    cout<<"Method 3"<<endl;
    int sum = (n*(n +1 )) / 2, sum_square = (n * (n +1) *(2*n +1) )/6;
    int missing = 0, repeating = 0;
    for(int i = 0; i < n; i++){
       sum_square -= arr[i]*arr[i];
       sum -= arr[i];
    }
    missing = (sum + sum_square/sum)/2;
    repeating = missing - sum;
    cout<<"Repeating Number is "<<repeating<<endl;
    cout<<"Missing Number is "<<missing<<endl;
}
int main()
{
	int arr[] = { 7, 3, 4, 5, 5, 6, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	// Method 1 is simply sort the array and traverse the array and check for missing and repeating.
	method2(arr, n); //Use elements as Index and mark the visited places.
    method3(arr, n); //Make two equations using sum and sum of squares.
}
