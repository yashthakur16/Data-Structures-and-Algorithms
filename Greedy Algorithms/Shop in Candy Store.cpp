//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
       vector<int> v;
       
       for(int i=0;i<N;i++)
       {
           v.push_back(candies[i]);
       }
       
       sort(v.begin(),v.end());
       
       int mini=0;
       int i=0;
       int j=N-1;
       while(i<=j)
       {
           mini=mini+v[i++];
           for(int p=0;p<K;p++)
           {
               if(j>=i)
               {
                  
                    j--;
               }
               
           }
       }
       
       
       int maxi=0;
       i=0;
       j=N-1;
       
       
        while(i<=j)
       {
           maxi=maxi+v[j--];
           for(int p=0;p<K;p++)
           {
               if(j>=i)
               {
                  
                    i++;
               }
               
           }
       }
       
       v.clear();
       
       v.push_back(mini);
       v.push_back(maxi);
       
       return v;
       
       
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends
