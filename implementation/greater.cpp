#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    stack <int> st;
    vector <int> res;
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    for(auto i: arr)
    {
        st.push( arr[i]);
        while( st.empty() !=0)
        {
            if( st.top() > arr[i])
            st.pop();
            res.push_back( st.top());
        }
    }
 for( auto x: res)
 {
    cout<<x;
 }
}