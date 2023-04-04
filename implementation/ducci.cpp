#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int ducii [n];
for( int i=0; i<n;i++)
{
    cin>> ducii[i];
}
int res[n];
for( int i=0; i<n;i++)
{
    res[i]= ducii[i]- ducii[i-1];

}
int k_find;
cin>>k_find;
for(int i=0; i<n;i++)
{
    if( k_find==i)
    cout<< ducii[i];
}
cout<< ducii;

}