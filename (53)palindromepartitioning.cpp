#include <bits/stdc++.h> 
bool ispalindrome(string str)
{
    int n=str.length();
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(str[i]!=str[j])
        return false;
        i++;
        j--;
    }
    return true;
}
void recursion(int indi,string str,vector<string>&temp,vector<vector<string>>&ans)
{
    if(indi>=str.length())
    {
        ans.push_back(temp);
        return;

    }
    for(int i=indi;i<str.length();i++)
    {
        string k=str.substr(indi,i-indi+1);
        if(ispalindrome(k))
        {
            temp.push_back(k);
            recursion(i+1,str,temp,ans);
            temp.pop_back();
        }
    }

}

vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    vector<vector<string>>ans;
    vector<string>temp;
    recursion(0,s,temp,ans);
    return ans;
}