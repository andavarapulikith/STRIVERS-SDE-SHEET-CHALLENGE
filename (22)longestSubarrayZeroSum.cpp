#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int n=arr.size();
    int sum=0;
    map<int,int>hash;
    int maxlen=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==0)
        maxlen=i+1;
        if(hash.find(sum)!=hash.end())
        {
            int l=i-hash[sum];
            maxlen=max(maxlen,l);
        }
        if(hash.find(sum)==hash.end())
        hash[sum]=i;
    }
  
    return maxlen;

}