class cmp{
    public:
    bool operator()(pair<int,string> a, pair<int,string> b) const{
        if(a.first < b.first) return true;
        else if(a.first == b.first && a.second>b.second) return true;
        return false;
    }
};
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string , int> mp;
        for(auto x:words){
            mp[x]++;
        }
        priority_queue<pair<int,string>,            vector<pair<int,string>>,cmp> q;
        for(auto x:mp){
            q.push({x.second,x.first});
        }
        vector<string> ans;
        while(k--){
            auto x= q.top();
            ans.push_back(x.second);
            q.pop();
        }
        //sort(ans.begin(),ans.end());
        return ans;
    }

};