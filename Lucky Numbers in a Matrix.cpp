class Solution {
public:
    
    bool checkColumn(int j,vector<vector<int>>& matrix,int n)
    {
              int rows = matrix.size();
        for (int i = 0; i < rows; ++i) {
            if (n < matrix[i][j]) {
                return false;
            }
        }
        return true;
    }
    
    
    vector<int> luckyNumbers (vector<vector<int>>& matrix) 
    {
        unordered_map<int,bool> mpp;
        for(vector<int> v: matrix)
        {
            int a=INT_MAX;
            for(auto i: v)
            {
                a=min(a,i);
            }
            
            mpp[a]=true;
            a=INT_MAX;
        }
        
        
        vector<int> ans;
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                int n=matrix[i][j];
                if(mpp[n]==true)
                {
                    if(checkColumn(j,matrix,n))
                    {
                        ans.push_back(n);
                    }
                    break;
                }
                    
            
            }
        }
        
        
        
        return ans;
        
        
    }
};
