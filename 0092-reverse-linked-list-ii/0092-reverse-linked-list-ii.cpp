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
    void reverse_karo_mujhe(vector<int> &temp,int start,int end){
        while(start<end){
            swap(temp[start],temp[end]);
            start++;
            end--;
        }
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> temp;
        while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;
        }

    
        reverse_karo_mujhe(temp,left-1,right-1);
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