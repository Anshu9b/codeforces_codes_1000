#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e6 + 5;


void solve()
{
	int n;
	cin >> n;
	vector<int>a(n);
	int sum = 0;
	for(int i =0 ; i<n;i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	
	//-1 , -1
	// 1 , -1
	//-1 , 1
	//-1 , -1
	bool flag1 = 0;
	bool flag2 = 0;
	bool flag3 = 0;
	for(int i =0  ; i<n-1;i++)
	{
		if(a[i] == -1 && a[i+1] == -1)
		{
			flag1 = 1;
			break;
		}
	}
	
	for(int i =0 ; i<n-1;i++)
	{
		if(flag1)
			break;
		if((a[i] == -1 && a[i+1] == 1) || (a[i] == 1 && a[i+1] == -1))
		{
			flag2 = 1;
			break;
		}
	}
	
	for(int i =0 ; i<n-1;i++)
	{
		if(flag1 || flag2)
			break;
		if(a[i] == 1 && a[i+1] == -1)
		{
			flag3 = 1;
			break;
		}
	}
	
	if(flag1 == 1)
	{
		sum += 4;
		cout<<sum<<endl;
		return;
	}
	else if(flag2 == 1)
	{
		cout<<sum<<endl;
		return;
	}
	else
	{
		cout<<sum-4<<endl;
		return;
	}
	
	
	
}


signed main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		solve();
	}
	return 0;
}