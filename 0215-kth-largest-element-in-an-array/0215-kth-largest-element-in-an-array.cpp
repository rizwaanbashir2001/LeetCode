class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> ans;
        for(auto x:nums){
            ans.push(x);
        }
        int val=0;
        for(int i=0;i<k;i++){
            val=ans.top();
            ans.pop();
        }
        return val;
    }
};