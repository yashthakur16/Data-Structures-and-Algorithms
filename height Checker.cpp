class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        vector<int> exp;
        
        for(auto i: heights)
        {
            exp.push_back(i);
        }
        
        sort(exp.begin(),exp.end());
        
        int ans=0;
        
        for(int i=0;i<heights.size();i++)
        {
            if(exp[i]!=heights[i])
            {
                ans++;
            }
        }
        
        return ans;
    }
};
