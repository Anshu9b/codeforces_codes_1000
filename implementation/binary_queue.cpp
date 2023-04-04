#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for( int i=0; i<n;i++)
    {
        queue <int> q;
        for( int i=1; i<n;i++)
        {
            long long int  x;
            q.push(i);
            if( q.empty()!=0)
            {
            x= q.pop();
            }
            cout<<q[i];
            vector <int> ans;
           q.push( x + '0');
            q.push( x + '1');
            cout<<q[i];

        }




    }
}
