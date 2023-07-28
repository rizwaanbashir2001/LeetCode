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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> temp;
        while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;
        }
        vector<int> odd;
        vector<int> even;
        for(int i=0;i<temp.size();i+=2){
            odd.push_back(temp[i]);  
        }
        
        for(int i=1;i<temp.size();i+=2){
            even.push_back(temp[i]);  
        }
        even.insert(even.begin(),odd.begin(),odd.end());
        
        ListNode*head1=NULL;
        ListNode*tail=NULL;
        for(auto x:even){
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