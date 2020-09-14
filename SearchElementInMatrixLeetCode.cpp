// Optimal Solution for LeetCode find element in a matrix.
//Here the first element of next row is larger than the last element of the first row

#include <bits/stdc++.h>

using namespace std;

void GfGSearchMatrix(vector<vector<int>>&mat,int target){
    if(mat.size()==0)
       return;
    int n= mat.size();
    int m= mat[0].size();
    int quantity = m*n - 1;
    int low=0;
    int mid;
    int high=quantity;
    while(low<=high){
        mid = (low+high)/2;
        if(mat[mid/n][mid%n]==target){
            cout<<"The Element is found at index i="<<mid/n<<" and j="<<mid%n<<endl;
            return;
        }
        else if(mat[mid/n][mid%n] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout<<"The Element is not found!"<<endl;
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
