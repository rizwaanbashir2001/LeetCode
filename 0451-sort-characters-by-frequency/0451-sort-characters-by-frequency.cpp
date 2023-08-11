class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        for (auto x:s){
            mp[x]++;
        }
        vector<pair<int, char>> p;
        for(auto x:mp){
            p.push_back({x.second, x.first});
        }
        sort(p.begin(),p.end());
        reverse(p.begin(),p.end());
        string s1="";
        for(auto x:p){
            for(int i=0;i<x.first;i++){
                s1+=x.second;
            }
        }
        return s1;
    }
};