
#include <bits/stdc++.h>

using namespace std;

int MinCost(int i,int j, vector<vector<int>>&mat,vector<vector<int>>&dp){
    int n=mat.size();
    int m=mat[0].size();
    
    if(i==n-1 && j==m-1){
        return mat[i][j];
    }
    if(i>=n || j>=m){
        return 1000;
    }
    if(dp[i][j]!=-1)
       return dp[i][j];
    
    int right =mat[i][j]+MinCost(i,j+1,mat,dp);
     int down =mat[i][j]+MinCost(i+1,j,mat,dp);
     int dia =mat[i][j]+MinCost(i+1,j+1,mat,dp);
     return dp[i][j]=(right,min(dia,down));
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m,0));
    vector<vector<int>>dp(n,vector<int>(m,0));
    for(int i=0;i<n;i++)
       for(int j=0;j<m;j++){
           cin>>mat[i][j];
           dp[i][j]=-1;
       }
           
    
    cout<<MinCost(0,0,mat,dp);
    

    return 0;
}
