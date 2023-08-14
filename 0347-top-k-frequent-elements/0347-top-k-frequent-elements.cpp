class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<pair<int,int>> vec;
        for(auto x:mp){
            vec.push_back({x.second,x.first});
        }
        sort(vec.begin(),vec.end(),greater<pair<int,int>>());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(vec[i].second);
        }       
        return ans;
    }
};