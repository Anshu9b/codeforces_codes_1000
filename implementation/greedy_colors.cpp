#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int needed_time[n];
string colors;
cin>>colors;
for(int i=0; i<n;i++)
{
    cin>>colors[i];
}
int time=0;
int maxi=0;
int i=0;
int j=1;
while(i<n-1 && j<n)
{
       if(colors[i]==colors[j])
       {
        time+=needed_time[i];
        i==j;
        j++;
       }
       else{
          // time+=needed_time[i];
           i==j;
           j++;
       }
 
   }
   
cout<<time;

}