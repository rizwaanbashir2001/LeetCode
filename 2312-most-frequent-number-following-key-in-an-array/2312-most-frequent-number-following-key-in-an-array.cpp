class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int, int> mp;
        for (int i=0;i<nums.size();i++){
            if(key==nums[i]&& i<nums.size()-1){
                mp[nums[i+1]]++;
            }
        }
        int var =INT_MIN;
        int value=0;
        for( auto x:mp){
            if (var<x.second ){
                var=x.second;
                value=x.first;
            }
        }
        return value;
    }
};