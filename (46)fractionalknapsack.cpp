#include <bits/stdc++.h> 
bool comparison(pair<int,int>a,pair<int,int>b)
{
    double p1=(double)a.second/(double)a.first;
    double p2=(double)b.second/(double)b.first;
    return p1>=p2;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(items.begin(),items.end(),comparison);
    int knapsack=w;
   

    double profit=0;
    int i=0;
    while(knapsack!=0)
    {
        if(knapsack>=items[i].first)
        {
          profit+=items[i].second;
          knapsack-=items[i].first;
          i++;
        }
        else
        {
            profit+=(double)items[i].second/(double)items[i].first*knapsack;
            knapsack=0;
        }
        // cout<<knapsack<<" ";
    }
    return profit;
}