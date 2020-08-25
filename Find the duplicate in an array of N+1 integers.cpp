#include<bits/stdc++.h>
using namespace std;
void brute(int arr[], int n)
{
    sort(arr, arr + n);
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i-1]){
            cout<<"Brute - "<<arr[i]<<endl;
            break;
        }
    }
}
void better(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int index = arr[i] % n;
        arr[index] += n;
    }
    for (int i = 0; i < n; i++)
    {
        if ((arr[i]/n) > 1)
            cout<<"Better - " << i << endl;
    }
}
void optimal(int arr[], int n)
{
    int slow = arr[0];
    int fast = arr[arr[0]];
    while (fast != slow) {
        slow = arr[slow];
        fast = arr[arr[fast]];
    }
    fast = 0;
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    cout<<"Optimal - "<<slow;
}
int main()
{
    int arr[] = {2,5,9,6,9,3,8,9,7,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    brute(arr, n); //sorting
    better(arr, n);
    optimal(arr, n); //tortoise and hare method.
    return 0;
}
