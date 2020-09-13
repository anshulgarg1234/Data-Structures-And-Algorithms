// Implement pow(x, n), which calculates x raised to the power n (i.e. x^n).
// Naive approach is to calculate using loop O(n) time.
// Check the test case when n < 0 i.e. integer overflow.
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long nn = n;
        if(nn < 0){
            nn = -1*nn;
        }
        while(nn){
            if(nn % 2){
                ans = ans * x;
                nn--;
            }
            else{
                x = x * x;
                nn /= 2;
            }
        }
        if(n < 0){
            ans = (double) 1.0 / (double) ans;
        }
        return ans;
    }
};
