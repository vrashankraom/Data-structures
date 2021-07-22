#include <bits/stdc++.h>

using namespace std;

int findVolume(int arr[],int n){
    int leftMax[n];
    int rightMax[n];
    int level[n];
    int sum=0;
    
    leftMax[0]=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>leftMax[i-1]){
            leftMax[i]=arr[i];
        }
        else{
            leftMax[i]=leftMax[i-1];
        }
    }
    
    rightMax[n-1]=arr[n-1];
    
    for(int i=n-1;i>=1;i--){
        if(arr[i-1]>rightMax[i]){
            rightMax[i-1]=arr[i-1];
        }
        else{
            rightMax[i-1]=rightMax[i];
        }
    }
    
    for(int i=0;i<n;i++){
        level[i]=min(leftMax[i],rightMax[i]);
    }
    
    for(int i=0;i<n;i++){
        sum = sum+(level[i]-arr[i]);
    }
    
    return sum;
}

int main()
{
    int n=6;
    int arr[n] = {5,4,3,2,3,5};
    cout<<findVolume(arr,n);
}
