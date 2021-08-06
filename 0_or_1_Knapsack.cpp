#include <bits/stdc++.h>
using namespace std;
 
// A utility function that returns
// maximum of two integers
int max(int a, int b) { return (a > b) ? a : b; }
 
// Returns the maximum value that
// can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
 
    // Base Case
    if (n == 0 || W == 0)
        return 0;
 
    // If weight of the nth item is more
    // than Knapsack capacity W, then
    // this item cannot be included
    // in the optimal solution
    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);
 
    // Return the maximum of two cases:
    // (1) nth item included
    // (2) not included
    else
        return max(
            val[n - 1]
                + knapSack(W - wt[n - 1],
                           wt, val, n - 1),
            knapSack(W, wt, val, n - 1));
}
 
// Driver code
int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapSack(W, wt, val, n);
    return 0;
}


//using DP
class Solution
{
    public:
    
    int findKnapSack(int W, int wt[], int val[], int n,vector<vector<int>>&dp){
        if(n==0 || W==0){
          return 0;
      }
      
      if(dp[n-1][W]!=-1){
          return dp[n-1][W];
      }
      if (wt[n - 1] > W)
        return findKnapSack(W, wt, val, n - 1,dp);
      
      int steal = val[n-1] + findKnapSack(W-wt[n-1],wt,val,n-1,dp);
      int notsteal = findKnapSack(W,wt,val,n-1,dp);
      
      return dp[n-1][W] = max(steal,notsteal);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
         vector<vector<int>> dp (500, vector<int> (500,-1));
         return findKnapSack(W, wt, val, n, dp);
    }
};
