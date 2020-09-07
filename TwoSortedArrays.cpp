//Program to sort two arrays in O(1) space

#include <bits/stdc++.h>

using namespace std;
int divide(int k){
    if(k<=1)
       return 0;
    return (k/2)+(k%2);
}
void twoSortedArrays(vector<int>&arr1,vector<int>&arr2,int m,int n){
    int gap=m+n;
    int i,j;
    for(gap = divide(gap);gap>0;gap=divide(gap)){
        for(i=0;gap+i<m;i++){
            if(arr1[i]>arr1[i+gap])
                swap(arr1[i],arr1[gap+i]);
        }
        for(j = gap>m ? gap-m :0;i<m && j<n;i++,j++){
            if(arr1[i]>arr2[j])
                swap(arr1[i],arr2[j]);
        }
        if(j<n){
            for(j=0;gap+j<n;j++){
               if(arr2[j]>arr2[j+gap])
                   swap(arr2[j],arr2[j+gap]);
            }
        }
    }
}


int main()
{
    int temp;
    int m,n;
    cin>>m;
   
    vector<int>arr1;
    vector<int>arr2;
    
    for(int i=0;i<m;i++){
        cin>>temp;
        arr1.push_back(temp);
    }
     cin>>n;
    for(int j=0;j<n;j++){
        cin>>temp;
        arr2.push_back(temp);
    }
    twoSortedArrays(arr1,arr2,m,n);
    
    for(int i=0;i<m;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int j=0;j<n;j++){
        cout<<arr2[j]<<" ";
    }
    cout<<endl;

    return 0;
}
