 #include <bits/stdc++.h>
 using namespace std;

int coin(int n, vector <int> arr {50,40,20,30,40} ) 
{
    int count=0;
    int ans;
if(n==50 || n==20|| n==10 || n==5)
return n;
if( n % arr[0])
{ 
    count++;
}
ans= ans % arr[0];
ans= ans/arr[1];
   // ans= n % 50;
      
    count+= ans;

else if( ans== n % 10 )
{
    ans= n/5;
    count+= ans;
}
}

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector <int> arr { 50,20, 10, 5 };
    for(int i=1; i< arr.size(); i++)
    {
        cin>>arr[i];
    }
    int change;
    change= coin( n, arr{ 50, 20, 10, 5});

}