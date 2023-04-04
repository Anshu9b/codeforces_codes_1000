#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t;
  cin>>t;

  while(t--)
  {
    ll n;
    cin>>n;
    
    vector <pair<ll,ll>> a(n),v;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i].first;
        a[i].second=i+1;
    }
    
    sort(a.begin(),a.end());
    if(a[0].first==1 && a[n-1].first!=1)
    {
    cout<<"-1"<<endl;
    continue;
    }
    
    ll ans=0;
    while(1)
    {
        if(a[0].first==a[n-1].first){ cout<<ans<<endl;  break;}
        a[n-1].first=(a[n-1].first+a[0].first-1)/a[0].first;
        v.push_back({a[n-1].second,a[0].second});
        sort(a.begin(),a.end());
        ans++;
    }
    
    for(ll i=0; i<ans; i++)
    cout<<v[i].first<<" "<<v[i].second<<endl;
    
  }
}