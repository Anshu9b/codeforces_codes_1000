#include<bits/stdc++.h>
using namespace std;
int t,n,a[200005],ans;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		a[0]=-1;
		for(int i=1;i<=n;i++)cin>>a[i];
		sort(a+1,a+n+1);
		ans=1;
		for(int i=1;i<=n;i++)if(a[i]-a[i-1]>1)ans++;
		cout<<ans<<endl;
	}
}