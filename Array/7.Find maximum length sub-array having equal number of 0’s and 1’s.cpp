#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0,0,1,0,1,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            arr[i] = -1;
        }
    }
    unordered_map<int, int> m;
    int pre_sum = 0, res = 0, end_index = -1;
    m[0] = -1;
    for(int i = 0; i < n; i++){
        pre_sum += arr[i];
        if(pre_sum == sum) {
            res = i + 1;
        }
        if(m.find(pre_sum) == m.end()){
            m[pre_sum] = i;
        }
        if(m.find(pre_sum - sum) != m.end()){
            res = max(res, i - m[pre_sum - sum]);
            end_index = i;
        }
    }
    cout<<"["<<end_index-res<<".."<<res + 1<<"]";
    return 0;
}
