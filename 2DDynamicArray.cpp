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
    int** a = new int*[m];
 
    for (int i = 0; i < m; i++) {
        a[i] = new int[n];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
   
    int sum = add(a,m,n);
    cout<<sum;
    
    return 0;
}
