#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
int k;
cin>>k;
for(int i=0; i<n;i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);
//stack <int> st;
//int ans=0;
for(int i=0 ;i<n;i++)
{
    if( k==i)
    {
    cout<< arr[i+1];
    }

}

}