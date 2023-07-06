#include <bits/stdc++.h> 
void recursion(vector<int>arr,int indi,vector<int> &temp,vector<vector<int>>&ans)
{
    ans.push_back(temp);
    if(indi>=arr.size())
    return;
    for(int i=indi;i<arr.size();i++)
    {
        if(i!=indi&&arr[i]==arr[i-1])
        continue;
        temp.push_back(arr[i]);
        recursion(arr,i+1,temp,ans);
        temp.pop_back();
    }

}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    vector<int>temp;
    recursion(arr,0,temp,ans);
    return ans;
    // Write your code here.
}