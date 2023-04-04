#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for( int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    unordered_map <int, int> mp;
    int count=0;
    //int ans=0;
    for(auto i : arr)
    {
        mp[arr[i]]+=1; // increment the value of map array
    }

    for ( auto it  = mp.begin() ;  it!= mp.end(); it++ )
    {
        if( (*it).second > 1)
        {
        count += (*it).second -1;
    }

}
cout<<count;
}