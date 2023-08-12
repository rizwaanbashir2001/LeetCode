class Solution {
public:
    bool solve(double n){
        if(n==3 ) return true;
        if(n<3) return false;
        return solve( n/3);
    }
    bool isPowerOfThree(int n) {
        if(n==1) return true;
        double m= (double) n;
        return solve(m);
        
    }
};