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
    ListNode* partition(ListNode* head, int n) {
        vector<int> temp;
        while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;
        }
        vector<int> less;
        vector<int> high;
        for(int i=0;i<temp.size();i++){
            if(temp[i]<n){
                less.push_back(temp[i]);
            }
            else{
                high.push_back(temp[i]);
            }
        }
        high.insert(high.begin(),less.begin(),less.end());
        ListNode*head1=NULL;
        ListNode*tail=NULL;
        for(auto x:high){
            ListNode*n= new ListNode(x);
            if(head1==NULL){
                head1=n;
                tail=n;
            }
            else{
                tail->next=n;
                tail=n;
            }
        }
        return head1;
    }
};