class Solution {
public:
    bool solve(double n){
        if(n==4 ) return true;
        if(n<4) return false;
        return solve( n/4);
    }
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        double m= (double) n;
        return solve(m);
    }
};