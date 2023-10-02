#include<bits/stdc++.h>

using namespace std;


void sumofarray(vector<int> arr1,vector<int> arr2,int m, int n)
{
    int i=m-1;
    int j=n-1;
    int carry=0;
    vector<int> ans;

    while(i>=0&&j>=0)
    {
        ans.push_back((arr1[i]+arr2[j]+carry)%10);
        carry=(arr1[i]+arr2[j]+carry)/10;
        i--;
        j--;
    }
    while(i>=0)
    {
        ans.push_back((arr1[i]+carry)%10);
        carry=(arr1[i]+carry)/10;
        i--;
    }



    while(j>=0)
    {
        ans.push_back((arr2[j]+carry)%10);
        carry=(arr2[j]+carry)/10;
        j--;
    }

    while(carry!=0)
    {
        ans.push_back((carry)%10);
        carry=carry/10;
    }

    reverse(ans.begin(),ans.end());

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}

int main()
{
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(4);

    vector<int> arr2;
    arr2.push_back(6);

    sumofarray(arr1,arr2,4,1);

}
