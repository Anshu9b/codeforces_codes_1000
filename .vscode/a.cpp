#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t,n;
	cin>>t;
	string x;
	while(t--){
		vector<string> v;
		cin>>n;
		for(int i=1;i<=2*n-2;i++){
			cin>>x;
			if(x.size()==n-1){
				v.push_back(x);
			}
		}
		reverse(v[0].begin(),v[0].end());
		if(v[0]==v[1]) cout<<"YES\n";
		else cout<<"NO\n";
		
	}
	return 0;
}
