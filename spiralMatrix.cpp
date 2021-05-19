/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
           cout<<endl;
     }
     cout<<endl;
    
    int row_start=0;
    int row_end=n-1;
    int column_start=0;
    int column_end=n-1;
    
    while(row_start<=row_end && column_start<=column_end){
        
        for(int column=column_start;column<=column_end;column++){
            cout<<a[row_start][column]<<" ";
        }

        
        row_start++;
        
        for(int row=row_start;row<=row_end;row++){
            cout<<a[row][column_end]<<" ";
        }

        column_end--;
       if(row_start<=row_end) {
       for(int column=column_end;column>=column_start;column--){
            cout<<a[row_end][column]<<" ";
        }
       
        row_end--;
       }
       if(column_start<=column_end) {
        for(int row=row_end;row>=row_start;row--){
            cout<<a[row][column_start]<<" ";
        }
        column_start++;
       }
        
        
    }

    return 0;
}
