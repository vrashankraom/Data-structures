#include <bits/stdc++.h>

using namespace std;

void heapify(int arr[],int n,int i){
    int smallest=i;
    int l=2*i + 1;
    int r=2*i + 2;
    
    if(l<n && arr[l]<arr[smallest]){
        smallest = l;
    }
    if(r<n && arr[r]<arr[smallest]){
        smallest = r;
    }
    if(smallest!=i){
        swap(arr[i],arr[smallest]);
        heapify(arr,n,smallest);
    }
}

void headSort(int arr[],int n){
    
    //first we build a max heap
    
    for(int i=(n/2)-1;i>=0;i--){
        heapify(arr,n,i);
    }
    
    //now we put the largest element in the end and heapify
    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    headSort(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
