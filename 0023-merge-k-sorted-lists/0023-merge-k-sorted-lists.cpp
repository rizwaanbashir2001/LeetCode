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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> temp;
        for(auto x: lists){
            while(x!=NULL){
                temp.push_back(x->val);
                x=x->next;
            }
        }
        sort(temp.begin(),temp.end());
        ListNode*head=NULL;
        ListNode*tail=NULL;
        for(auto x:temp){
            ListNode*n=new ListNode(x);
            if(head==NULL){
                head=n;
                tail=n;
            }
            else{
                tail->next=n;
                tail=n;
            }
        }
        return head;
    }
};