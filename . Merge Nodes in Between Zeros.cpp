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
    ListNode* mergeNodes(ListNode* head) 
    {
       int sum=0;
        
        ListNode* temp=head;
        ListNode* head2=head;
        ListNode* temp2=head;
        
        head=head->next;
        
        while(head!=NULL)
        {
            if(head->val==0)
            {
                temp->val=sum;
                sum=0;
                temp->next=head;
                temp2=temp;
                temp=temp->next;
            }
            else
            {
                sum=sum+head->val;
            }
            head=head->next;
        }
        temp2->next=NULL;
        
        return head2;
    }
};
