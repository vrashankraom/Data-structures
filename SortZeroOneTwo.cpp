//Program to sort array containing 0s 1s and 2s in O(1)
/* Sorting 0 and 1 is easy. you need to count all the 0s first.then in the same array, add the count of 0s then n-count 1s */
#include <bits/stdc++.h>

using namespace std;
void Sorting(vector<int>&arr){
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
    
    Sorting(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
