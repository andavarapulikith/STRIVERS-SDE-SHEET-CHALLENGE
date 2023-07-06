#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    map<int,int>hash;
    hash[0]=1;
    int xr=0;
    int count=0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        xr=xr^arr[i];
        int k=xr^x;
        count+=hash[k];
        hash[xr]++;
        
    }
    return count;
}