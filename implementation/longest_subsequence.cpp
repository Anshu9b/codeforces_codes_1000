#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    int maxi=0;
    int ans=0;
   sort( arr, arr+n);
   for (int i=0; i<n; i++)
   {
    if(arr[i] != arr[i+1] +1)
     count++;
     else
     break;
     ans= max( count, maxi);
   }

cout<<ans;

}