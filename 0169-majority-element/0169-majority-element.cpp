class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            if(x.second>n/2){
                return x.first;
            }
        }
        return -1;
    }
};