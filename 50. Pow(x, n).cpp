class Solution {
public:
    double myPow(double x, int n) {
         if (n == 0) {
            return 1;
        }
        if (n == INT_MIN) {
            return myPow(x, n + 1)*1/x;
        }
        bool isneg = false;
        if (n < 0) {
            n = -n;
            isneg = true;
        }
        double half = myPow(x, n/2);
        double ans = n % 2 == 0 ? 1 : x;
        ans = ans*half*half;
        return isneg ? 1/ans : ans;
    }
};