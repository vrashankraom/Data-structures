

#include <iostream>

using namespace std;

int findFirstOccurance(char arr[],int value){
    int low=0;
    int high = 6;
    int ans=-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==value){
            ans = mid;
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


int findLastOccurance(char arr[],int value){
    int low=0;
    int high = 6;
    int ans=-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==value){
            ans = mid;
            low = mid+1;
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
    char arr[] = {'a','b','g','g','g','k','l'};
    int value='g';
    
    int ans1 = findFirstOccurance(arr,value);
    cout<<ans1<<endl;
    int ans2 = findLastOccurance(arr,value);
    cout<<ans2<<endl;
    
    return 0;
}
