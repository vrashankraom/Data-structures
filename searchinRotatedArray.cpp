// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 int getPivot(int arr[],int start,int end){
        int mid = start+(end-start)/2;
        //4 steps
        while(start<=end){
        if(arr[mid]>arr[mid+1])
            return mid;
        if(arr[mid]<arr[mid-1])
            return mid-1;
        if(arr[start]>=arr[mid])
            end = mid-1;
        else
           start = mid+1;
        }
        return -1;
    }
int binarySearch(int arr[],int target,int start,int end){
    int mid = start+(end-start)/2;
      while(start<=end){
        if(arr[mid]==target)
           return mid;
        if(arr[mid]<target)
           start = mid+1;
        else 
           end = mid-1;
      }
      return -1;
}

int main() {
    int arr[] ={3,4,5,6,7,0,2,2};
    int target = 5;
    
    int pivot = getPivot(arr,0,8);
    cout<<pivot<<endl;
    if(target>=arr[0]){
        cout<<binarySearch(arr,target,0,pivot);
    }
    else{
        cout<<binarySearch(arr,target,pivot+1,8);
    }
    
   
    return 0;
}
