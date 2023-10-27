#include <bits/stdc++.h> 
/***********************************************************

    Following is the linked list node structure

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
Node<int>* reverselinkedlist(Node<int>* head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    Node<int>*curr=head;
    Node<int>*prev=NULL;
    Node<int>*forward=NULL;

    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        
    }

    return prev;
}


Node<int>* rearrangeList(Node<int>* head)
{
    if(head==NULL||head->next==NULL||head->next->next==NULL)
    {
        return head;
    }
   Node<int>*slow=head;
   Node<int>*fast=head->next;

   while(fast!=NULL&&fast->next!=NULL)
   {
       fast=fast->next;
       if(fast!=NULL)
       {
           fast=fast->next;
       }
       slow=slow->next;
   }



    Node<int>*head2=slow;
   head2=reverselinkedlist(slow->next);
   slow->next=NULL;


   Node<int>* curr1=head;
   Node<int>* curr2=head2;
   Node<int>* forward1=curr1->next;
   Node<int>* forward2=curr2->next;

   while(forward1!=NULL && forward2!=NULL)
   {
       curr1->next=curr2;
       curr2->next=forward1;
       curr1=forward1;
       forward1=forward1->next;
       curr2=forward2;
       forward2=forward2->next;
   }

   if(forward1!=NULL)
   {
       curr1->next=curr2;
       curr2->next=forward1;
       curr1=forward1;
       forward1=forward1->next;
       curr2=forward2;
   }

   curr1->next=curr2;


   return head;
}
