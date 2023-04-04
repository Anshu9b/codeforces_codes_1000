#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>> n;
int arr[n];
for( int i=0; i<n; i++)
{
    cin>>arr[i];
}
stack <int> s1;
stack <int> s2;
for( int i=0; i<n/2;i++)
{
 s1.push(arr[i]);
}
for( int i=n/2; i<n; i++)
{
    s2.push( arr[i]);
}
for (int i=0; i<s1.size();i++)
{
    s1.pop();
}

}