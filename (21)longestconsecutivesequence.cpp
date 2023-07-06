#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_set<int>hash;
    for(int i=0;i<n;i++)
    {
        hash.insert(arr[i]);
    }
    int currele=INT_MIN;
    int maxlen=0;
    int len=0;
    for(int ele :hash){
        if(!hash.count(ele-1))
        {
         len=1;
          currele=ele;
        }
       while (hash.count(currele + 1)) {
        currele += 1;
        len += 1;
      }

      maxlen = max(maxlen,len);
    }
    return maxlen;
}