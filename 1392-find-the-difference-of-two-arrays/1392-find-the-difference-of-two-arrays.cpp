class Solution {
public:

    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        vector<int> n=solve(nums1,nums2);   
        vector<int> m=solve(nums2,nums1);
        ans.push_back(n);
        ans.push_back(m);
        return ans;
    }
    private:
    vector<int> solve(vector<int> nanwani,vector<int>bunty){
        set<int> piyush;
        for(auto x:nanwani){
            if(count(bunty.begin(),bunty.end(),x)==0) piyush.insert(x);
        }
        vector<int> vc(piyush.begin(), piyush.end());
        return vc;
    }
};