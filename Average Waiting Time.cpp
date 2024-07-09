class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) 
    {
        double n=customers.size();
        if(n==1)
        {
            return customers[0][1];
        }
        
        int time=customers[0][0]+customers[0][1];
        double ans=customers[0][1];
        
        for(int i=1;i<n;i++)
        {
            if(time>customers[i][0])
            {
                ans=ans+customers[i][1]+time-customers[i][0];
                time=time+customers[i][1];
            }
            else
            {
                ans=ans+customers[i][1];
                time=customers[i][0]+customers[i][1];
            }
        }
        
        return ans/n;
        
        
    }
};
