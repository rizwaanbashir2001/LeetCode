class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        int n=0;
        while(n<nums.size()){
            int val= nums[n];
            int i=n+1;
            while(i<nums.size()){
                if(val==nums[i]) count++;
                i++;
            }
            n++;
        }
        return count;
    }
};