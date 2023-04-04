#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int coins[n];
    for(int i=0; i<n;i++)
    {
        cin>> coins[i];
    }
    int amount;
    cin>>amount;
    int res=0;
    sort( coins+n, coins);
    for( auto i: coins)
    {
        if( i <=amount)
        {
            int c= floor( amount / i);
            res= res+c;
            amount= amount - c * coins[i];
        }
        if( amount==0)
        break;
    }
    cout<< res;
}