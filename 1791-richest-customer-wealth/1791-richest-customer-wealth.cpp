class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int sum=INT_MIN;
        for(auto x:acc){
            int temp= accumulate(x.begin(),x.end(),0);
            sum=max(sum,temp);
        }
        return sum;
    }
};