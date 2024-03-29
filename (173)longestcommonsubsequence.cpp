#include<bits/stdc++.h>

int rec(int i, int j,string text1, string text2,vector<vector<int>> &dp)

{

    if(i < 0 || j < 0)return 0;

    if(dp[i][j] != -1)return dp[i][j];

    int ans;

    if(text1[i] == text2[j])

    ans = 1 + rec(i-1,j-1,text1,text2,dp);

    else

    ans = max(rec(i-1,j,text1,text2,dp),rec(i,j-1,text1,text2,dp));

    return dp[i][j] = ans;

 

}

 

int lcs(string s, string t)

{

    //Write your code here

        int n = s.size();

        int m = t.size();

        vector<vector<int>> dp(n,vector<int>(m,-1));

        return rec(n-1,m-1,s,t,dp);

}