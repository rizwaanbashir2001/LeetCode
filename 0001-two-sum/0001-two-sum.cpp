class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v1;
        vector<int> v2;
        int n = nums.size();
        cout << n;
        for(int i=0;i<n-1;i++)
        {
            for (int j=1;j<n;j++)
            {
                if(nums[i]+nums[j]==target && j != i  )
                {
                    v1.push_back(i);
                    v1.push_back(j);
                    break;
                }
                
            }
            
        }
         v2.push_back(v1[0]);
         v2.push_back(v1[1]);
        return v2;
        
        
    }
};