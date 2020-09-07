//Program to sort two arrays in space O(1)

#include <bits/stdc++.h>

using namespace std;
void twoSortedArrays(vector<int>&arr){
    int low = 0;
    int mid = 0;
    int high =arr.size()-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low++],arr[mid++]);
        }
        if(arr[mid]==1){
            mid++;
        }
        if(arr[mid]==2){
            swap(arr[mid],arr[high--]);
        }
    }
}


int main()
{
    int n;
    int temp;
    cin>>n;
    vector<int>arr;
    
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    
    twoSortedArrays(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
