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
        const int inf = 500009;
        vector <int> cnt(inf,0);
        vector <vector<int>> v(n);
       // create 2d vector of type way
      // 4
       //1 2 3 4
       //3 
       //1 5 6
        for(int i=0; i<n;i++)
        {
            int a; 
            cin>>a;
            for(int j=0; j<a;j++)
              {
                int b;
                cin>>b;
                v[i].push_back( b);
                cnt[b]++;
              }
        }
        vector <int> ans;
        for(int i=0; i<n;i++)
        {
            bool flag= false;
            for(auto x : v[i])
            {
                if(cnt[a]==1 && !flag= true)
                {
                    ans.push_back( a);
                    cnt[a]--;
                    flag= true;
                }
            }
for( auto i : ans)
{
    cout<< 
}

//check froM GREEDY
//USE MAP TO STORE PARTICULAR DAY OF PEOPLE











}























