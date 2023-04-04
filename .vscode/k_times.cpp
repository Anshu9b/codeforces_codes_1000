#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int k;
cin>>k;
int arr[n];
for( int i=0; i<n;i++)
{
    cin>>arr[i];
}
sort( arr, arr+n);
int count=0;
for(int i=0; i<n;i++)
{
    if( arr[i]==arr[i+1])
    {
        count++;
    }
    if(count==k)
        break;
       cout<< arr[i]; 
          //  cout<<arr[i];
    
    
    
}
//cout<< arr[i];

}
