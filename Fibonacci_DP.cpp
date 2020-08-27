#include<iostream>
using namespace std;
int fib(int n,int *dp){
     if(n<=1)
        return n;
     //dynamic programming
      if(dp[n]!=-1)
        return dp[n];
      
      dp[n]=fib(n-1,dp)+fib(n-2,dp);
      return dp[n];
}
int main(){
  int n;
  cin>>n;
  //for numbers from 0 to n
  int dp[n+1];
  for(int i=0;i<=n;i++)
      dp[i]=-1;
  cout<<fib(n,dp);
  return 0;
}
