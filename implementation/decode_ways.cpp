#include <bits/stdc++.h>
using namespace std;
int solve (int i, string &s, vector<int> &dp)
 {
    int n= s.size();
  for(int i=0; i<n;i++)
  {
    if( dp[i]==0)
    return 0;
    else if(dp[i]==1)
    return dp[i-1] + dp[i];
  }