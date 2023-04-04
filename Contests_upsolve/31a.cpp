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
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
bool ans=false;
for(int i=1; i<=n;i++)
{
    if(arr[i]<=i+1)
  {
    ans=true;
    
  }   
}
if(ans==true)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

}
}
 int min=0;
        for(int i=0; i<nums1.size();i++)
        {
            if(nums[i]< nums[i+1])
                min=nums[i];
        }
        int min2=0;
        for(int i=0; i<nums2.size();i++)
        {
            if(nums2[i]<nums2[i+1])
                min2= nums2[i];
        }
        for(int i=0; i<nums2.size();i++)
        
    }
     
        int ans=0;
     int min=0;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]< nums[i+1])
                min=nums[i];
        }
        int min2=0;
        for(int i=0; i<nums2.size();i++)
        {
            if(nums2[i]<nums2[i+1])
                min2= nums2[i];
        }
        for(int i=0; i<nums2.size();i++)
        {
            if(min!=nums2[i] && min2!= nums[i])
                ans= // jo min,min2 
                else(min==nums2[i] || min2==nums[i])
                    ans= min;
                
            
        }
        return ans;












temp = set(nums1).intersection(nums2) 
        m1 = min(nums1)
        m2 = min(nums2) 
        ans = min(m1*10+m2, m1+m2*10)
        if temp : ans = min(temp, ans) 
        return ans













