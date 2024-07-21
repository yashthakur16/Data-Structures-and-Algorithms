class Solution {
public:
    
    void createAdj(vector<vector<int>>& arr,unordered_map<int,list<int>> &adj)
    {
        for(int i=0;i<arr.size();i++)
        {
            int u=arr[i][0];
            int v=arr[i][1];
            
            adj[u].push_back(v);
        }
        
        return;
    }
    
    vector<int> topoSort(unordered_map<int,list<int>> &adj,int n)
    {
        vector<int> inDegree(n+1,0);
        
        for(auto i : adj)
        {
            for(auto v : i.second)
            {
                inDegree[v]++;
            }
        }
        
        queue<int> q;
        
        for(int i=1;i<=n;i++)
        {
            if(inDegree[i]==0)
            {
                q.push(i);
            }
        }
        
        vector<int> ans;
        
        while(!q.empty())
        {
            int front=q.front();
            q.pop();
            ans.push_back(front);
            
            for(auto neighbour : adj[front])
            {
                inDegree[neighbour]--;
                if(inDegree[neighbour]==0)
                {
                    q.push(neighbour);
                }
            }
        }
        
        for(int i=1;i<=n;i++)
        {
            if(inDegree[i]!=0)
            {
               
                return {};
            }
        }
        
        return ans;
        
        
        
    }
    
    void addExtras(vector<int> &topo,int k)
    {
        unordered_map<int,bool> mpp;
            for(auto i : topo)
            {
                mpp[i]=true;
            }
        
        for(int i=1;i<=k;i++)
        {
            if(mpp[i]!=true)
            {
                topo.push_back(i);
            }
        }
        
        return;
            
    }
    

    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) 
    {
       
        unordered_map<int,list<int>> adjrow;
        unordered_map<int,list<int>> adjcol;
        
        createAdj(rowConditions,adjrow);
        createAdj(colConditions,adjcol);
        
        vector<int> topoRow;
        vector<int> topoCol;
        
        topoRow=topoSort(adjrow,k);
        topoCol=topoSort(adjcol,k);
        
        if(topoRow.empty() || topoCol.empty()) return {};
        
        addExtras(topoRow,k);
        addExtras(topoCol,k);
        
        
        vector<vector<int>> ans(k,vector<int>(k,0));
        
        
        
        unordered_map<int,int> colIndex;
        
        for(int i=0;i<topoCol.size();i++)
        {
            colIndex[topoCol[i]]=i;
        }
        
        for(int i=0;i<topoRow.size();i++)
        {
            ans[i][colIndex[topoRow[i]]]=topoRow[i];
        }
        
        return ans;
        
        
    }
};
