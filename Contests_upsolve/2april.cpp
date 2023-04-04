#include<bits/stdc++.h>
#include<iostream>
typedef long long ll;
using namespace std;
 const int MOD=1000000007;
ll power(ll x, ll y)
{
ll res = 1;
 x = x % MOD;
if (x == 0) return 0;
while (y > 0)
{
if (y & 1)
res = (res*x) % MOD;
y = y>>1;
 x = (x*x) % MOD;
}
	return res;
}
void take_input_vector(vector<ll> v) {
 int n = v.size();
for(int i = 0; i < n; i++) cin>>v[i];
}
void print_vector(vector<ll> v)
 {
 int n = v.size();
 reverse(v.begin(),v.end());
for(int i = 0; i < n; i++) cout << v[i] <<" ";
 cout << endl;
 int main()
{
int t;
cin>>t;
while(t--)
{
ll n;
cin>>n;
vector<vector<ll>>v;
vector<ll>ans;
vector<bool>b(100000,false);
ll x;
for(auto i=0;i<n;i++)
{
cin>>x;
vector<ll>temp(x);
for(auto &i:temp)
{
	cin>>i;
}
v.push_back(temp);
}
for(int i=n-1;i>=0;i--)
{
for(int i=n-1;i>=0;i--)
{
	ll k=0;
	for(auto j:v[i])
	{
     if(k==0 && b[j]==false)
	 {
		ans.push_back(j);
        k=1;
		b[j]=true;
	 }
	 else
	 {
		b[j]=true;
	 }
	}
}
if(ans.size()!=n)
{
	cout<<-1<<'\n';
}
else
{
	print_vector(ans);
}

}
return 0;

}
