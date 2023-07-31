class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    
        vector<int> n=solve(nums1,nums2);   
        
        return n;
    }
    private:
    vector<int> solve(vector<int> nanwani,vector<int>bunty){
        set<int> piyush;
        for(auto x:nanwani){
            if(count(bunty.begin(),bunty.end(),x)>0) piyush.insert(x);
        }
        vector<int> vc(piyush.begin(), piyush.end());
        return vc;
      
    }
};