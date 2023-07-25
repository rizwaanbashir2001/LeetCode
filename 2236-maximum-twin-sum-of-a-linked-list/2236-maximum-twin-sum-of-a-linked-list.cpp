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
    int pairSum(ListNode* head) {
         vector<int> temp;
        while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;
        }
        int i=0;
        int j=temp.size()-1;
        int max_val=INT_MIN;
        while (i<j){
            max_val=max(max_val,temp[i]+temp[j]);
            i++;
            j--;

        }
        return max_val;
    }
};