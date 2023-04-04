#include <bits/stdc++.h>
using namespace std;
int main()
{
    int pivot=0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        if( arr[i] <pivot)
         swap( arr[i], arr[i+1]);
    else
    i++;
    }

}