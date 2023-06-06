#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    long long int maxi=0;
    long long int minprice=prices[0];
    for(int i=1;i<prices.size();i++)
    {
        if(minprice>prices[i])
        minprice=prices[i];
        else
        {
            maxi=max(maxi,prices[i]-minprice);
        }
    }
    return maxi;
}