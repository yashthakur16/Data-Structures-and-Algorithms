class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) 
    {
       
        vector<pair<int,int>> ans;
        
        for(int i=0;i<nums.size();i++)
        {
            string number= to_string(nums[i]);
            string n="";
            for(auto i : number)
            {
                n=n+(to_string(mapping[i-'0']));
            }
            
            int k=stoi(n);
            
            ans.push_back({k,i});
        }
        
        sort(ans.begin(),ans.end());
        
        vector<int> sorted;
        for(auto i : ans)
        {
            sorted.push_back(nums[i.second]);
        }
        
        return sorted;
        
        
    }
};
