class Solution {
public:
    int findTheWinner(int n, int k) 
    {
        queue<int> q;
        
        for(int i=1;i<=n;i++)
        {
            q.push(i);
        }
        int count=1;
        
        while(q.size()>1)
        {
            if(count==k)
            {
                q.pop();
                count=1;
            }
            else
            {
                int a =q.front();
                q.pop();
                q.push(a);
                count++;
            }
        }
        
        return q.front();
        
    }
};
