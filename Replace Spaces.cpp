#include <bits/stdc++.h> 
string replaceSpaces(string &str)
{
	string ans;

	for(auto i: str)
	{
		if(i==' ')
		{
			ans.append("@40");
		}
		else
		{
			ans.push_back(i);
		}
	}

	return ans;
}
