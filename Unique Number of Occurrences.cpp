class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<int> ans;

        for(int i=0;i<n;i++)
        {
            int cnt=1;
            while (i + 1 < arr.size() && arr[i] == arr[i + 1]) {
                cnt++;
                i++;
            }

            ans.push_back(cnt);
        }
        sort(ans.begin(),ans.end());
        n=ans.size();

       for (int i = 1; i < ans.size(); i++) {
            if (ans[i] == ans[i - 1]) {
                return false;
            }
       }


        return true;
    }
};
