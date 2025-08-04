class Solution {
public:
    double pospower(double x, long long n) {
        if (n == 0) return 1;
        double y = pospower(x, n / 2);
        if (n % 2 == 0) {
            return y * y;
        } else {
            return x * y * y;
        }
    }

    double myPow(double x, int n) {
        long long N = n;  
        if (N < 0) {
        
            return 1.0 / pospower(x, N);
        } else {
            return pospower(x, N);
        }
    }
};
