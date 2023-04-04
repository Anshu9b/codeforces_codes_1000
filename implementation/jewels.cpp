#include <bits/stdc++.h>
using namespace std;
int main()

{
    string jewels;
    cin>>jewels;
    string stones;
    cin>>stones;
    int count=0;
    for(int i=0; i<stones.size();i++)
    {
    if( stones[i]== jewels[i])
    count++;
}
cout<<count;
}