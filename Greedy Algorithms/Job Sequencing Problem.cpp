//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    
    
    static bool cmp(Job a,Job b)
    {
        return a.profit>b.profit;
    }
    
    
    
    
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector<Job> v;
        int maxi=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            v.push_back(arr[i]);
            maxi=max(maxi,arr[i].dead);
        }
        
        sort(v.begin(),v.end(),cmp);
        
        vector<int> deadline(maxi+1,-1);
        
        int count=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int d=v[i].dead;
            
            for(int k=d;k>0;k--)
            {
                if(deadline[k]==-1)
                {
                    count++;
                    ans+=v[i].profit;
                    deadline[k]=v[i].id;
                    break;
                }
            }
           
        }
        
        
        return{count,ans};
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends
