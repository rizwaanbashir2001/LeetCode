class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        for(auto x:nums){
            if(x==val)continue;
            else ans.push_back(x);
        }
        nums=ans;
        return ans.size();
        
    }
};