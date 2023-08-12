class Solution {
public:
 bool solve(double n){
        if(n==2 ) return true;
        if(n<2) return false;
        return solve( n/2);
    }
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        double m= (double) n;
        return solve(m);
    }
};