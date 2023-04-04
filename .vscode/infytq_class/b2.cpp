#include <bits/stdc++.h>
#define ll long long
using namespace std;

void print_vector(vector<ll> v) 
{
 int n = v.size();
 reverse(v.begin(),v.end());
for(int i = 0; i < n; i++) cout << v[i] <<" ";
 cout << endl;
}

// check for any prev day person not present at prev day if yes the true otherwise make it false
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
    print_vector( ans);
	
}
}
}