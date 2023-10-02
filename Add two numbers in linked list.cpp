//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    struct Node* reverse(struct Node* head)
    {
        struct Node* curr=head;
        struct Node* prev=NULL;
        struct Node* next=NULL;
        
        while(curr !=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        struct Node* rfirst=reverse(first);
        struct Node* rsecond=reverse(second);
        Node* temp=new Node(0);
        struct Node* head=temp;
        struct Node* fhead=rfirst;
        struct Node* shead=rsecond;
        struct Node* ans=head;
        
        int carry=0;
        
        while (fhead != NULL || shead != NULL || carry != 0)  // Consider carry as well.
        {
            int sum = carry;
            if (fhead != NULL) {
                sum += fhead->data;
                fhead = fhead->next;
            }
            if (shead != NULL) {
                sum += shead->data;
                shead = shead->next;
            }
            
            ans->next = new Node(sum % 10);
            ans = ans->next;
            carry = sum / 10;
        }
        
        struct Node* finalans = reverse(head->next);
        
        return finalans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends
