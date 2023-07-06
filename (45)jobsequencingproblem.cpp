#include <bits/stdc++.h> 
bool comparison(vector<int>a,vector<int>b)
{
    return a[1]>=b[1];
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    int n=jobs.size();
    sort(jobs.begin(),jobs.end(),comparison);
    int maxi=0;
    int count=0;
    int profit=0;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,jobs[i][0]);
        // cout<<jobs[i][1]<<" ";
    }
    int arr[maxi+1]={-1};
    for(int i=0;i<=maxi;i++)
    arr[i]=-1;
    // cout<<maxi;
    for(int i=0;i<n;i++)
    {
        for(int j=jobs[i][0];j>=1;j--)
        {
            if(arr[j]==-1)
            {
                arr[j]=1;
                profit+=jobs[i][1];
                ++count;
                break;
            }
        }
    }
    return profit;
}
