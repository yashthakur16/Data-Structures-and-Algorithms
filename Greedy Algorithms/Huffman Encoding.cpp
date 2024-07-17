//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    
    class Node
    {
        public:
        Node* left;
        Node* right;
        int data;
        
        Node(int data)
        {
            this->left=NULL;
            this->right=NULL;
            this->data=data;
            
        }
    };
    
    class cmp
    {
        public:
        bool operator()(Node* a, Node* b)
    {
        return a->data>b->data;
    }
    };
    
    
    void traverse(string temp,vector<string> &ans, Node* root)
    {
        if(root->left==NULL&&root->right==NULL)
        {
            ans.push_back(temp);
            return ;
        }
        
        traverse(temp+'0',ans,root->left);
        traverse(temp+'1',ans,root->right);
    }
    
    
    
	public:
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    priority_queue<Node*,vector<Node*>,cmp> pq;
		    
		    for(int i=0;i<N;i++)
		    {
		        Node* temp=new Node(f[i]);
		        pq.push(temp);
		    }
		    
		    
		    while(pq.size()>1)
		    {
		        Node* left=pq.top();
		        pq.pop();
		        Node* right=pq.top();
		        pq.pop();
		        
		        Node* newNode=new Node(left->data+right->data);
		        newNode->left=left;
		        newNode->right=right;
		        
		        pq.push(newNode);
		    }
		    
		    Node* root=pq.top();
		    
		    string temp="";
		    vector<string> ans;
		    
		    traverse(temp,ans,root);
		    
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string S;
	    cin >> S;
	    int N = S.length();
	    vector<int> f(N);
	    for(int i=0;i<N;i++){
	        cin>>f[i];
	    }
	    Solution ob;
	    vector<string> ans = ob.huffmanCodes(S,f,N);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    }
	return 0;
}
// } Driver Code Ends
