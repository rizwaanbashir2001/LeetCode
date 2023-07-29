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
        void solve(int start, int end, vector<int> &nums){
           while(start<end){
           swap(nums[start],nums[end]);
           start++;
           end--;
           }
        }
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> temp;
        while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;
        }
        
        int n=temp.size();
        for(int i=0;i<n;i++){
            if(n-i<k) break;
            solve(i,i+k-1,temp);
            i=i+k-1;
        }

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