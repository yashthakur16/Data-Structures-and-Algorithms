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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
    ListNode* curr1=l1;
    ListNode* curr2=l2;
    ListNode* prev1=curr1;
    int carry=0;

    while(curr1!=NULL && curr2!=NULL)
    {
        int sum=curr1->val+curr2->val+carry;
        curr1->val=sum%10;
        carry=sum/10;
        prev1=curr1;
        curr1=curr1->next;
        curr2=curr2->next;
    }

    while(curr2!=NULL)
    {
        int sum=curr2->val+carry;
        prev1->next=new ListNode(sum%10);
        carry=sum/10;

        prev1=prev1->next;
        curr2=curr2->next;
    }

    while(curr1!=NULL)
    {
        int sum=curr1->val+carry;
        curr1->val=sum%10;
        carry=sum/10;
        prev1=curr1;
        curr1=curr1->next;
    }

   if(carry!=0)
    {
        if(curr1==NULL)
        {
            curr1=prev1;
            curr1->next=new ListNode(carry);
        }
        else
        {
            curr1->val=carry;
        }
        
    }

    return l1;
    }
};
