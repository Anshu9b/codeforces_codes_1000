#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack <int> st1;
    //stack <int> st2;
    int n= s.size();
    for ( int i=0; i<n; i++)
    {
        {
        while ( st1.empty()!=0)
        {
        st1.push( s[i]);
        if( st1 [i]== s[i])
        {
            st1.pop();
        }
        else 
        {
            st1.push(s[i]);
        }
        }
        cout
    