#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector <char> arr={ 'A','B','D','O','P','Q','R'};
string s;
cin>>s;
//for(int i=0; i<n;i++)
int count=0;
int ans=0;
for (int i=0; i<n; i++) 
{
    if (find(arr.begin(), arr.end(), s[i]) != arr.end()) 
    {
        count++;
    }
}

cout<<count;


}