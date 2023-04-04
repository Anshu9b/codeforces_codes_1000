#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);
    stack <int> ans;
    vector <int> res;
   // vector <int> ans;
    for(int i=n-1; i>0 ; i++)
   {
    if( ans.size() ==0)
    {
       res.push_back( -1);
    }
    else if ( ans.size() > 0 && ans.top() > arr[i])
   // stack <int> ans;
   {
    res.push_back( ans.top());
   }
   else if ( ans.size() && ans.top() <= arr[i])
    {
        while( ans.size() >0 && ans.top () <= arr[i])
        {
            ans.pop();
        }
        if( ans.size()==0)
        {
            res.push_back(-1);
        }
        else
        res.push_back( ans.top());
    }
   }
 
for(int i=0; i<ans.size(); i++)
{
    ans.push( res[i]);
}
   

}