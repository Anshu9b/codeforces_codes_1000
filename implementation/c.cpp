#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        int la= 1;
        for(int i=1; i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<=n;i++)
        {
            int l=la, r=i;
            int len= r-l+1;
            while( a[l]<len)
            {
                l++;
                len--;
            }
            cout<<len<<" ";
            la=l;
        }
        cout<<endl;
    }
    return 0;
}