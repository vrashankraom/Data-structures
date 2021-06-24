#include <bits/stdc++.h>

using namespace std;
int add(int **a,int m,int n){
    return a[0][1]+a[1][0];
}

int main()
{
    int m,n;
    cin>>m;
    cin>>n;
   vector<char> v2(n, '*'); 
   int count=0;
   vector<vector<char>>v2d2(m,v2);
   for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
          cout<<v2d2[i][j]<<" ";
      }
      cout<<endl;
   }
    
    return 0;
}
