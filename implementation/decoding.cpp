#include <bits/stdc++.h>
using namespace std;

int main()
{
  string seq;
  cin>>seq;
  int count1, count2;
  map<char, int> mp;
  mp['A']=1;
  mp['B']=2;
  mp['C']=3;
  mp['D']=4;
  mp['E']=5;
char arr[26];
for ( char i='0' ; i<'26'; i++)
{
    arr[i]=i;
}
  //auto it = map <char,int> mp; 
  for(int i=0; i<n;i++)
  {
    if(seq[i]== arr[i])
    count1++
  }
  int ans= count1 * (count1-1)/2;
  cout<<ans;


}