#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) 
{
    int n=q.size();
    int half=n/2;

    vector<int> first;
    vector<int> second;
    int i=0;


    while(i<half)
    {
        first.push_back(q.front());
        q.pop();
        i++;
    }

    while(!q.empty())
    {
        second.push_back(q.front());
        q.pop();
    }

    int p=0;
    int m=0;

    while(p<first.size()&&m<second.size())
    {
        q.push(first[p++]);
        q.push(second[m++]);
    }
    
    return ;
}
