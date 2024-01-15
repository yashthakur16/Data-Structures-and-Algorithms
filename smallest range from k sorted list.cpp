#include<queue>
#include<limits.h>
#include<algorithm>

class node
{
    public:

    int row;
    int col;
    int data;

    node(int row,int col,int data)
    {
        this->row=row;
        this->col=col;
        this->data=data;
    }
};

class compare
{
    public:

    bool operator()(node* a, node *b)
    {
        return a->data > b->data;
    }
};

int kSorted(vector<vector<int>> &a, int k, int n) 
{
    int mini=INT_MAX;
    int maxi=INT_MIN;

    priority_queue <node*,vector<node*>,compare> minheap;

    for(int i=0;i<k;i++)
    {
        node* temp=new node(i,0,a[i][0]);
        minheap.push(temp);
        mini=min(mini,a[i][0]);
        maxi=max(maxi,a[i][0]);
    }

    int start=mini;
    int end=maxi;
    


    while(!minheap.empty())
    {
        int ans=end-start;
        node* temp=minheap.top();
        minheap.pop();
        mini=temp->data;
        int row=temp->row;
        int col=temp->col;
        int newans=maxi-mini;

        if(newans<ans)
        {
            start=mini;
            end=maxi;
        }
        
        if(col+1<n)
        {
            maxi=max(maxi,a[row][col+1]);
            node* temp=new node(row,col+1,a[row][col+1]);
            minheap.push(temp);
        }
        else
        {
            break;
        }

    }

    return (end-start+1);


}
