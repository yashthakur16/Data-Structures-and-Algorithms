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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) 
    {
       unordered_map<int,bool> mpp;
        
        for(auto i: nums)
        {
            mpp[i]=true;
        }
        
        ListNode* anshead=head;
        
        while(anshead!=NULL)
        {
            if(mpp[anshead->val]==true)
            {
                anshead=anshead->next;
            }
            else
            {
                break;
            }
        }
        
        if(anshead==NULL)
        {
            return NULL;
        }
        
        ListNode* curr=anshead;
        
        while(curr->next!=NULL)
        {
            if(mpp[curr->next->val]==true)
            {
                curr->next=curr->next->next;
            }
            else
            {
                curr=curr->next;
            }
        }
        
        return anshead;
        
        
    }
};
