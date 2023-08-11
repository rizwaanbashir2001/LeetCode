class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
       
        map<int,int>mp;
        for(auto x:nums) mp[x]++;
        int count=0;
        int left=0;
        for(auto x:mp){
           if(x.second %2==0){
               count+=(x.second)/2;
           }
           else{
               count+=(x.second)/2;
               left++;
           }
        }
        return {count,left};
    }
};