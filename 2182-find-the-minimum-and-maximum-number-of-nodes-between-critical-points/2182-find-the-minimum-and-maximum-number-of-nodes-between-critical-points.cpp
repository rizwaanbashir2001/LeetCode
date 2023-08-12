/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> temp;
        while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;
        }
        if(temp.size()<3) return {-1, -1};
        vector<int> cric;
        int min_d=INT_MAX;
        for(int i=1;i<temp.size()-1;i++){

            if((temp[i-1]<temp[i]) && (temp[i+1]<temp[i])){
                // cout<<"r";
                cric.push_back(i+1);
            }
            if((temp[i-1]>temp[i]) && (temp[i+1]>temp[i])){
                cric.push_back(i+1);
            }
        }
        if(cric.size()==0 || cric.size()==1 ) return{-1, -1};
        sort(cric.begin(),cric.end());
        // for(auto x:cric){
        //     cout << x << " ";
        // }
        // int min_d=INT_MAX;
        int max_d=cric[cric.size()-1]-cric[0];
        for(int i=0;i<cric.size()-1;i++){
            
                min_d=min(min_d,cric[i+1]-cric[i]);
            
        }
        return {min_d, max_d};

    }
};