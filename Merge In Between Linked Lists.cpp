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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
        ListNode* curr=list1;
        ListNode* start;
        int k=0;

        while(curr->next!=NULL&&k+1!=a)
        {
            curr=curr->next;
            k++;
        }
        start=curr;

        while(curr->next!=NULL&&k!=b)
        {
            curr=curr->next;
            k++;
        }

        start->next=list2;

        ListNode* head2=list2;

        while(head2->next!=NULL)
        {
            head2=head2->next;
        }
        head2->next=curr->next;
        curr->next=NULL;

        return list1;

    }
};
