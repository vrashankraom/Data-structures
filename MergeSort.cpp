

#include <iostream>
using namespace std;

//Calling the Merge function to sort and merge two arrays
void Merge(int *a,int s,int e){
    int mid = (s+e)/2;
    
    //Two counters for two arrays
    int i=s;
    int j=mid+1;
    //One counter for array temp
    int k=s;
    
    int temp[100];
    
    //Put the Sorted elements in the Temp array
    while(i<=mid && j<=e){
        if(a[i]<a[j])
        {
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
        }
    }
    //Add the Remaining elements also
    
    while(i<=mid){
         temp[k++] = a[i++];
    }
    while(j<=e){
         temp[k++] = a[j++];
    }
    
    //Put the elements of Temp in original Array a
    for(int i=s;i<=e;i++){
        a[i]=temp[i];
    }
    
}


void MergeSort(int *a,int s,int e){
    //Base Condition
    if(s>=e)
       return;
     
    //Split the Array by half
    int mid = (s+e)/2;
    
    MergeSort(a,s,mid);
    MergeSort(a,mid+1,e);
    
    //Now Merge the Arrays
    Merge(a,s,e);
}


int main()
{
    int a[100];
    int n;
    cout<<"Please Enter the Number of Array Elements "<<endl;
    cin>>n;
    cout<<"Please Enter the Array Elements: "<<endl;
    for(int i=0;i<n;i++)
       cin>>a[i];
    cout<<"Elements before Sorting is: "<<endl;
    for(int i=0;i<n;i++)
       cout<<a[i]<<" ";
    cout<<endl;
    
    //Function Call
    MergeSort(a,0,n-1);
    
    cout<<"The Sorted Array Elements are: ";
    for(int i=0;i<n;i++)
       cout<<a[i]<<" ";

    return 0;
}
