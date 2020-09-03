//A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
//The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid.
//How many possible unique paths are there?
#include<bits/stdc++.h>
using namespace std;
int brute(int i, int j, int n, int m)
{
    if(i == n - 1 && j == m - 1){
        return 1;
    }
    if(i >= n || j >= m){
        return 0;
    }
    return brute(i + 1, j, n, m) + brute(i, j + 1, n, m);
}
int optimal(int m, int n) {
        int N = n + m - 2;
        int r = m - 1;
        long long int res = 1;
        for(int i = 1; i <= r; i++){
            res = res * (N - r + i)/i;
        }
        return res;
    }
int main()
{
    cout<<"Brute : "<<brute(0,0,3,3)<<endl; //Using recursion count all the ways.
    // Method 2 is using DP(memoization).
    cout<<"Optimal : "<<optimal(5,5)<<endl; //By observation we return the combinations.
    return 0;
}
