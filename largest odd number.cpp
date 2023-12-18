class Solution {
public:
    string largestOddNumber(string num) 
    {
        int n=num.size();
        int length=-1;
        if(num.find_last_of('9')!=string::npos)
        {
            length=max(length,static_cast<int>(num.find_last_of('9')));
        }
        if(num.find_last_of('7')!=string::npos)
        {
            length=max(length,static_cast<int>(num.find_last_of('7')));
        }
        if(num.find_last_of('5')!=string::npos)
        {
            length=max(length,static_cast<int>(num.find_last_of('5')));
        }
        if(num.find_last_of('3')!=string::npos)
        {
            length=max(length,static_cast<int>(num.find_last_of('3')));
        }
        if(num.find_last_of('1')!=string::npos)
        {
            length=max(length,static_cast<int>(num.find_last_of('1')));
        }   
        string ans=num.erase(length+1,n);
        return ans;
        
    }
};
