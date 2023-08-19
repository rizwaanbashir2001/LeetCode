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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        vector<int> temp;
        while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;
        }
        for(int i=0;i<temp.size()-1;i+=2){
            int g = __gcd(temp[i],temp[i+1]);
            temp.insert(temp.begin()+(i+1),g);
            
            
        }


        ListNode*head1=NULL;
        ListNode*tail=NULL;
        for(int i=0;i<temp.size();i++){
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