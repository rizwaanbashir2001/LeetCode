class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        map<int,int> mp;
        for(auto x:nums) mp[x]++;
        for(auto x: mp){
            int n= x.second;
            count+=(n*(n-1)/2);
        }
        return count;
    }
};