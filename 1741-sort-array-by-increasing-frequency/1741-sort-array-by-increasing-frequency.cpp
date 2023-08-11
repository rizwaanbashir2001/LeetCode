class Solution {
public:
    class compare_fun
    {    
        public:
        bool operator()(pair<int, int> p1, pair<int, int> p2)
        {    
            if(p1.second==p2.second)
                return p1.first<p2.first;
            return p1.second>p2.second;
        }
    };
    vector<int> frequencySort(vector<int>& nums) {
        //sort(nums.begin(),nums.end(), greater<int>());
        for(auto x:nums){
            cout << x << " ";
        }
        unordered_map <int,int> mp;
        priority_queue <pair <int,int>, vector<pair <int,int>>, compare_fun> q;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto &i:mp){
            q.push({i.first,i.second});
        }
        vector<int> ans;
        while(!q.empty()){
            auto x=q.top();
            cout<<x.first<<" "<<x.second<<endl;
            for(int i=0;i<x.second;i++){
                ans.push_back(x.first);
            }
            q.pop();
        }
        return ans;
    }
};