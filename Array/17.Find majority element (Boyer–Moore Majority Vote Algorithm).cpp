#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = { 1, 8, 7, 4, 1, 2, 2, 2, 2, 2, 2 };
	int n = sizeof(arr)/sizeof(arr[0]);
	int elem;
	int cntr = 0;
	for(int i = 0; i < n; i++){
        if(cntr == 0){
            elem = arr[i];
            cntr = 1;
        }
        else{
            if(arr[i] == elem){
                cntr++;
            }
            else{
                cntr--;
            }
        }
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
        if(arr[i] == elem){
            cnt++;
        }
	}
	if(cnt > n/2){
        cout<<"Majority Element is "<<elem;
	}
	else{
        cout<<"No majority element";
	}
	return 0;
}
