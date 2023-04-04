#include<bits/stdc++.h>
using namespace std;
constexpr int N=1e5;
int a[N];
int main(){
	int n;
	cin>>n;
	while(n--){
		int num;
		cin>>num;
		for(int i=1;i<=num;i++){
			cin>>a[i];
			if(a[i]==1)a[i]++;
		}
		for(int i=1;i<num;i++){
			while(a[i+1]%a[i]==0)a[i+1]++;
		}
		for(int i=1;i<=num;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	
}