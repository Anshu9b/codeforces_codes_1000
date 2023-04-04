#include <bits/stdc++.h>
using namespace std;
int main()
{

int T;
	cin>>T;
	while(T--){
		long long a,b,n,m;
		cin>>a>>b>>n>>m;
		cout<<min(min(a,b)*n,n/(m+1)*a*m+n%(m+1)*min(a,b))<<endl;
	}
}