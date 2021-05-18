//clockwise
#include <iostream>

using namespace std;

int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
    }
    int a[3][3]={0};
    int b[3][3]={0};
    int k=2;
    int l=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a[j][k]=arr[i][j];
        }
        k--;
  
    cout<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<a[i][j]<<" ";
    }
    cout<<endl;
     }
        }
  //anticlockwise
     k=2;
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            b[k][i]=arr[i][j];
            k--;
        }
        k=2;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<b[i][j]<<" ";
    }
    cout<<endl;
     }
    

    return 0;
}


//no extra space
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
