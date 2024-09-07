/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 *		Node() : data(0), next(nullptr){};
 *		Node(int x) : data(x), next(nullptr){};
 *		Node(int x, Node *next) : data(x), next(next){};
 * };
 */

Node* insert(int k, int val, Node *head) 
{
	int n=0;

	Node *node=new Node();
	node->data=val;

	if(k==0)
	{
		node->next=head;
		Node *curr=head;
		while(curr->next->data!=head->data)
		{
			curr=curr->next;
		}
		curr->next=node;

		return node;
	}

	Node *curr=head;
	while(true)
	{
		
		if(n==k-1)
		{
			node->next=curr->next;
			curr->next=node;
			break;
		}
		else
		{
			curr=curr->next;
			n++;
		}

	}	

	return head;
}
