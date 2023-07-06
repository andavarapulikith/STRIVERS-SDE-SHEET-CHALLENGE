int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int i=0,j=0;
    int maxi=0,count=0;
    while(i<n && j<n)
    {
          if(at[i]<=dt[j])
          {
              ++count;
              maxi=max(maxi,count);
              ++i;
          }
          if(dt[j]<at[i])
          {
              ++j;
              --count;
          }
    }
    return maxi;
}