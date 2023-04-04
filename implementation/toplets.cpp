#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n] = { 0,1,2,3,4,5,6,7,8,9};
     int arr[n][n];

for( int i=0 ; i<n;i++)
{
  for(int j=0; j<n;j++)
  {
       cin>> arr[i][j];
  }

}

for ( int i=0; i<n;i++)
{
for( int j=0;j<n;j++)
{

    if( arr[i+1]== arr[i+1] [j+1])
    cout<<"true";
    else 
    cout<<"false";
}

}





}