#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n;i++)
    {
        for( int j=0; j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int ans=0;
    int sum_1=0;
    int sum_2=0;
    int sum_3=0;
    for(int i=0; i<n;i++)
    {
         ans= n *( n*n +1)/2;
    }
    
        for(int j=0; j<n;j++)
        {
        sum_1+= arr [0][j];
        sum_2 += arr[1][j];
        sum_3+= arr[2][j];
       }
    
int row_1=  ans - sum_1;
int row_2= ans- sum_2;
int row_3= ans- sum_3;
 cout<< row_1<<endl;
 cout<<row_2<<endl;
 cout<< row_3<<endl;

}