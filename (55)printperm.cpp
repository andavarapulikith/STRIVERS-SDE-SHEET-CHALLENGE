#include <bits/stdc++.h> 
void findallpermutations(string s,int freq[],vector<string>&ans,string temp)
{
    if(s.length()==temp.length())
    {
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<s.length();i++)
    {
        if(!freq[i])
        {
            freq[i]=1;
            findallpermutations(s, freq, ans, temp+s[i]) ;
            freq[i]=0;
        }
    }
}
vector<string> findPermutations(string &s) {
    // Write your code here.
    int n=s.length();
    int freq[n];
    for(int i=0;i<n;i++)
    freq[i]=0;
    vector<string>ans;
    string temp="";
    findallpermutations(s,freq,ans,temp);
    return ans;
}