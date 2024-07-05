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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) 
    {
        if(head->next==NULL)
        {
            vector<int> a(2,-1);
            return a;
        }
        
        
        ListNode* curr=head->next;
        ListNode* prev=head;
        
        ListNode* forward=head->next->next;
        vector<int> temp;
        int count=1;
        
        while(forward!=NULL)
        {
            count++;
            if(curr->val>forward->val&&curr->val>prev->val)
            {
                temp.push_back(count);
            }
            else if(curr->val<forward->val&&curr->val<prev->val)
            {
                temp.push_back(count);
            }
            prev=curr;
            curr=forward;
            forward=forward->next;
        }
        
        vector<int> ans;
        
        int n=temp.size();
        
        if(n>=2)
        {
            int mini=INT_MAX;
            for(int i=0;i<n-1;i++)
            {
                mini=min(mini,temp[i+1]-temp[i]);
            }
            ans.push_back(mini);
            ans.push_back(temp[n-1]-temp[0]);
            return ans;
        }
        else
        {
            vector<int> ab(2,-1);
            return ab;
        }
        
        return ans;
        
 
    }
};
