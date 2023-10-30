class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) 
    {
        int n=arr.size();
        unordered_map<int,int> s;

        for(int i=0;i<n;i++)
        {
            s[arr[i]]=__builtin_popcount(arr[i]);
        }

        vector<int> ans;
        for (int i = 0; i < n; i++) 
        {
            ans.push_back(arr[i]);
        }

// Sort 'ans' using a custom comparator function
    sort(ans.begin(), ans.end(), [&](int a, int b) 
    {
        if (s[a] != s[b]) 
        {
            return s[a] < s[b]; // Sort by the count of set bits
        }
        else 
        {
            return a < b; // If counts are the same, sort by the integer value
        }
    }
    );

return ans;
    }
};
