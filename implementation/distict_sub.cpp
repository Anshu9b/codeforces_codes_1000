#include <bits/stdc++.h>
using namespace std;
int main()
{
 #define ll long long
    ll dp[2001];
    ll MOD=1e9+7;

    ll solve(string &s,ll index,unordered_map<char,ll>&mp){
        if(index<0){
            return 1;
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        ll answer=(2*solve(s,index-1,mp))%MOD;
        if(mp.find(s[index])!=mp.end()){
            answer=(answer-solve(s,mp[s[index]]-1,mp)+MOD)%MOD;
        }
        mp[s[index]]=index;
        return dp[index]=answer;
    }

    int distinctSubseqII(string s) {
        ll n=s.length();memset(dp,-1,sizeof(dp));
        unordered_map<char,ll>mp;
        return (solve(s,n-1,mp)-1+MOD)%MOD;



}
// using map
 modulo  = 10**9+7
        dp = [0]*(len(s)+1)
        dp[0] = 1
        mapped = {}
        # empty string always 1 subsequence 
        for i in range(len(s)):
            dp[i+1] = dp[i]*2
            if s[i] in mapped:
                dp[i+1] = dp[i+1] - dp[mapped[s[i]]-1]
            mapped[s[i]] = i+1
        return (dp[-1]-1)%modulo