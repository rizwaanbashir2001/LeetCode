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
    ListNode* addTwoNumbers(ListNode* head, ListNode* head2) {
        vector<long long> temp;
        while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;
        }
        vector<long long> temp1;
        while(head2!=NULL){
            temp1.push_back(head2->val);
            head2=head2->next;
        }
        reverse(temp.begin(),temp.end());
        reverse(temp1.begin(),temp1.end());
        int n =temp.size();
        int m =temp1.size();
        int i=0, j=0;
        int carry=0;
        vector<int> nums;
        while(i!=n && j!=m){
            int sum= temp[i] + temp1[i];
            int max_val=sum + carry;
            nums.push_back(max_val%10);
            if(max_val>9) {
                carry=1;
            }
            else carry=0;

            
            i++;
            j++;
        }
        if(i!=n){
            while(i!=n){
                int sum=(temp[i])+ carry;
                nums.push_back(sum%10);
                if(sum>9) carry=1;
                else carry=0;
                i++;
            }
        }
        else{
            while(j!=m){
                int sum=(temp1[j]) + carry;
                nums.push_back(sum%10);
                if(sum>9) carry=1;
                else carry=0;
                j++;
            }
        }

        if(carry==1) nums.push_back(1); 
        reverse(nums.begin(),nums.end());
        ListNode*head1=NULL;
        ListNode*tail=NULL;
        for(auto x:nums){
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