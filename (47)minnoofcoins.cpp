#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    int cnt=0;
    if(amount>=1000)
    {
        cnt+=amount/1000;
        amount=amount%1000;
    }
    if(amount>=500)
    {
        cnt+=amount/500;
        amount=amount%500;
    }
    if(amount>=100)
    {
        cnt+=amount/100;
        amount=amount%100;
    }
    if(amount>=50)
    {
        cnt+=amount/50;
        amount=amount%50;
    }
    if(amount>=20)
    {
        cnt+=amount/20;
        amount=amount%20;
    }
    if(amount>=10)
    {
        cnt+=amount/10;
        amount=amount%10;
    }
    if(amount>=5)
    {
        cnt+=amount/5;
        amount=amount%5;
    }
    if(amount>=2)
    {
        cnt+=amount/2;
        amount=amount%2;
    }
    if(amount>=1)
    {
       
    cnt+=amount;
    }
    return cnt;
}
