#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>> arr[i];
    }
 long long count=0;
    long long ans=0;
    for(int i=0; i<n;i++)
    {
      if( arr[i]==0)
      count++;
    else
    {
    
    ans+= count*(count+1)/2;
    count=0;
    }
    }
    if(count!=0)
    {
        ans+= count*(count+1)/2;
    }
    cout<<ans;
}