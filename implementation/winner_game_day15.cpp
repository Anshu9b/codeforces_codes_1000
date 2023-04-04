#include <bits/stdc++.h>
using namespace std;
int main()
{
string str;
cin>>str;
int n= str.size();
int count=0;
stack <int> st;
for( int i=0; i<n;i++)
{
   st.push( str[i]);
   if( str[i]== st.top())
   st.pop( );
   count++;


}
if( count % 2==0)
cout<< "B";
else if( count%2!=0)
cout<<"A";
else
{
    if(count==0)
    cout<<"No";
}


}