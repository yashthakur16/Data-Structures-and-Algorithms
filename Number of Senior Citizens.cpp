class Solution {
public:
    int countSeniors(vector<string>& details) 
    {
        
        int count=0;
        for(auto str : details)
        {
            string s="";
            s.push_back(str[11]);
            s.push_back(str[12]);
            int age=stoi(s);
            
            if(age>60)
            {
                count++;
            }
        }
        
        return count;
    }
};
