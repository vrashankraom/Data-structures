

#include <iostream>

using namespace std;

int findUpperBound(char arr[],int value){
    int low=0;
    int high = 6;
    int ans=-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]<=value){
            low = mid+1;
        }
      
        else{
            ans = arr[mid];
            high = mid-1;
        }
    }
    return ans;
}

int findLowerBound(char arr[],int value){
    int low=0;
    int high = 6;
    int ans=-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]>=value){
            ans = arr[mid];
            high = mid-1;
            continue;
        }
      
        else if(arr[mid]<value){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}

int main()
{
    char arr[] = {'a','b','d','g','h','k','l'};
    int value='h';
    
    int ans1 = findLowerBound(arr,value);
    cout<<char(ans1)<<endl;
    int ans2 = findUpperBound(arr,value);
    cout<<char(ans2)<<endl;
    
    return 0;
}
