#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    int len=input.length();
    vector < int > mpp(256, -1);
    int maxlen=0;
    int l=0;
    int r=0;
    while (r < len) {
     if (mpp[input[r]] != -1)
          l = max(mpp[input[r]] + 1, l);

        mpp[input[r]] = r;

        maxlen = max(maxlen, r - l + 1);
        r++;

      }
    return maxlen;
}