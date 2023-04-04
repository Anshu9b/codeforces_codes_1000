#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   vector <int> arr(n);
   for( int i=0; i<n; i++)
   {
    int mid= n/2;
    while (n!=0)
    {
        swap( arr[i], arr[i+1]);
    }
   }



}