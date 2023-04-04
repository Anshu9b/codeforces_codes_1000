#include <bits/stdc++.h>
 using namespace std;
 // zeroes element 
int main()
{
    int n;
    cin>>n;
    int dp[n];
    memset(0,n+1,1);
    int val;
    int min_val= INT_MAX;
    int limit= sqrt(n);
    for(int i=0; i< n;i++)
    {
        for( int j=0; j<limit;j++)
        {
            val= i*i-j;
            if( val >= min_val)
            {
                dp[i]= min(dp[i],val);

            }

        }
        cout<<dp[n];

    }


}