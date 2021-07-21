#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define all(n) n.begin(),n.end() 
#define vec vector<int>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vp(it,arr)  for(auto it:arr){cout<<it<<;}
#define LOOP(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int fib(int n){
    //Recursive Approach 
    if(n==1||n==0) return n;
    return fib(n-1)+fib(n-2);
}
int fibDP(int n,vec &dp){
    //Top Down Approach
    //Double Pass 
    //Recursive /memoize
    if(n==1||n==0) return n;
    if(dp[n]!=-1){
        return dp[n];
    }
  return dp[n]=fibDP(n-1,dp)+fibDP(n-2,dp);
}
int fibDP1(int n,vec &dp){
    //Bottom Up approach
    //Single Pass
    //Iterative/tabulation
    dp[0]=0;dp[1]=1;
    for(int a=2;a<=n;a++){
        dp[a]=dp[a-1]+dp[a-2];
    }
    return dp[n];
}

//Most efficient in the terms o fspace complexity 
int fibDP2(int n){
    int c=0;
    int d=1;
    int nen=n;
    for(int e=1;e<nen;e++){
         n=c+d;
         c=d;
         d=n;
         }
  return n;
}


int main(){
int n;
cin>>n;
vec dp(n+1,-1);
cout<<fibDP(n,dp)<<endl;  // Top Down Approach

cout<<fibDP1(n,dp)<<endl;
cout<<fibDP2(n)<<endl;


return 0;
}