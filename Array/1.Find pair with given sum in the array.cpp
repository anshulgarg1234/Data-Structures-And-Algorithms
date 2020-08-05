#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
	int arr[] = {8, 7, 2, 5, 3, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 10;
	unordered_map<int, int> m;
	m[arr[0]]=0;
	for(int i = 1; i < n; i++){
		if(m.find(sum-arr[i]) != m.end()){
			cout<<"Pair found at index "<<m[sum-arr[i]]<<" and "<<i;
			break;
		}
		m[arr[i]]=i;
	}
	return 0;
}
