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
    ListNode* middleNode(ListNode* head) {
         vector<int> temp;
        while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;
        }
        int mid;
        if(temp.size()%2==1){
            mid = temp.size()/2;
        }
        else{
            mid=temp.size()/2 ;

        }
        ListNode*head1=NULL;
        ListNode*tail=NULL;
        for(int i=mid;i<temp.size();i++){
            ListNode*n=new ListNode(temp[i]);
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