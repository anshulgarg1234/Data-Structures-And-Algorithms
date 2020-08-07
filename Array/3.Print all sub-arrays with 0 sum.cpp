#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
void printAllSubsets(int arr[], int n){
    unordered_multimap<int, int> m;
    m.insert(pair<int, int>(0, -1));
    int sum = 0;
    for(int i = 0; i < n ; i++){
        sum += arr[i];
        if(m.find(sum)!= m.end()){
            auto it = m.find(sum);
            while(it != m.end() && it->first == sum){
                cout<<"Sub array ["<<it->second + 1<<".."<<i<<"]"<<endl;
                it++;
            }
        }
        m.insert(pair<int, int> (sum, i));
    }
}
int main(){
    int arr[] = {3,4,-7,3,1,3,1,-4,-2,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printAllSubsets(arr, n);
    return 0;
}
