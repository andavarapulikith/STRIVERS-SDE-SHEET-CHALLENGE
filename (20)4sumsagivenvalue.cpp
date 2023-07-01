#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        if(i>0&&arr[i]==arr[i-1])
        ++i;
        for(int j=i+1;j<n;j++)
        {
            if(j>i+1&&arr[j]==arr[j-1])
            ++j;
            int k=j+1;
            int l=n-1;
            while(k<l)
            {
                int sum=arr[i]+arr[j];
                sum+=arr[k];
                sum+=arr[l];
                if(sum==target)
                {
                  return "Yes";
                }
                else if(sum>target)
                --l;
                else
                ++k;
            }
        }
    }
    return "No";
}
