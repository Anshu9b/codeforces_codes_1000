#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int arr[n][m];
for(int i=0; i<n;i++)
{
    for( int j=0; j<m;j++)
    {
        cin>>arr[i][j];
    }
}
int maxi=0;
int dp[n][m];
for( int i=0; i<n;i++)
{
    for (int j=0; j<m;j++)
    {
        dp[i][m]= arr[i][5];
     if( arr[i] [j+1]>  arr[i+1][j+1])
     maxi= max( arr[i][j+1], arr[i+1][j+1]);     dp[n][m]= arr[i][j+1];
        
    }
}



}