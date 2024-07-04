/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
   int count=0;

   Node* temp=head;
   while(temp!=NULL)
   {
    temp=temp->next;
    count++;
   }
   count=count-K;

   if(count==0)
   {
       head=head->next;
       return head;
   }

   temp=head;

   while(count>1)
   {
       count--;
       temp=temp->next;
   }

   temp->next=temp->next->next;

   return head;

}
