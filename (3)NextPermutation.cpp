#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &arr, int n)
{
    //  Write your code here.
    int indi=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i+1]>arr[i])
        {
            indi=i;
            break;
        }
    }
    if(indi==-1)
    {
        reverse(arr.begin(),arr.end());
        return arr;

    }
    
    for (int i = n - 1; i > indi; i--) {
        if (arr[i] > arr[indi]) {
            swap(arr[i], arr[indi]);
            break;
        }
    }
    // swap(arr[indi],arr[minindex]);
    reverse(arr.begin()+indi+1,arr.end());
    return arr;
}