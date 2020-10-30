#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
          priority_queue<long>maxHeap;
          priority_queue<long,vector<long>,greater<long>>minHeap;
        long n;
        cin>>n;
        long d;
        cin>>d;
        maxHeap.push(d);
        long med=d;
        cout<<med<<" ";
        while(n>1){
            cin>>d;
            if(maxHeap.size()>minHeap.size()){
                if(d<med){
                    minHeap.push(maxHeap.top());
                    maxHeap.pop();
                    maxHeap.push(d);
                }
                else{
                    minHeap.push(d);
                }
                med=(maxHeap.top() + minHeap.top())/2;
            }
            else if(maxHeap.size()==minHeap.size()){
                if(d<med){
                    maxHeap.push(d);
                    med=maxHeap.top();
                }
                else{
                    minHeap.push(d);
                    med=minHeap.top();
                }
            }
            else{
                if(d>med){
                    maxHeap.push(minHeap.top());
                    minHeap.pop();
                    minHeap.push(d);
                }
                else{
                    maxHeap.push(d);
                }
                med=(maxHeap.top() + minHeap.top())/2;
            }
            cout<<med<<" ";
            n--;
        }
        cout<<endl;
    }
    return 0;
}
