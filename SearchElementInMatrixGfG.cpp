// Optimal Solution for GfG find element in a matrix.
//Here the first element of next row NEED NOT BE larger than the last element of the first row

#include <bits/stdc++.h>

using namespace std;

void GfGSearchMatrix(vector<vector<int>>&mat,int target){
    if(mat.size()==0)
       return;
    int n= mat.size()-1;
    int m= mat[0].size()-1;
    int i,j;
    i=0;
    j=m;
    while(j>=0 && i<=n){
        if(mat[i][j] == target){
            cout<<"Element found in the index i="<<i<<" and j="<<j;
            return;
        }
        if(mat[i][j] < target){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<"Element not found!";
}

int main()
{
    int n,m,temp;
    cout<<"Enter the no rows"<<endl;
    cin>>n;
    cout<<"Enter the no of Columns"<<endl;
    cin>>m;
    vector<vector<int>>mat(n);
    cout<<"Please enter the elements in the matrix"<<endl;;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>temp;
            mat[i].push_back(temp);
        }
    }
    cout<<"Please enter the target"<<endl;
    int target;
    cin>>target;
    GfGSearchMatrix(mat,target);
    

    return 0;
}
