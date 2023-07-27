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
    ListNode* mergeTwoLists(ListNode* head, ListNode* head2) {
        vector<int> temp;
        while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;
        }
       vector<int> temp1;
        while(head2!=NULL){
            temp.push_back(head2->val);
            head2=head2->next;
        }
        temp.insert(temp.begin(),temp1.begin(),temp1.end());
        for(auto x: temp){
            cout << x<<" ";
        }
        sort(temp.begin(),temp.end());
        
        ListNode*head1=NULL;
        ListNode*tail=NULL;
        for(auto x:temp){
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