#include <bits/stdc++.h>
using namespace std;
int main()
{
    int start=0;
    int end=0;
   int count_zero=0;
   int count_one=0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
cin>>arr[i];
    
    if( arr[i]==0)
    
    count_zero++;
    else
    count_one++;
    }
    cout<< count_one;
}