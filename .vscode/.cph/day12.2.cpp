#include <bits/stdc++.h>
using namespace std;
int main ()
{
string s;
cin>>s;
for(int i=0; i<s.size();i++)
{
    if(s[i]=='@')
    {
        for(int j=i+1; j<s.size();j++)
        {

                    cout<<s[j];
                    if(s[j]=='.')
                    break;
        }
    }
}

}

/*
s = input()
for i in range(len(s)):
    if s[i] == '@':
        for j in range(i + 1, len(s)):
            print(s[j], end="")
            if s[j] == '.':
                break
*/