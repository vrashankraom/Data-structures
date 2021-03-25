#include <iostream>
using namespace std;

int partition(int *a,int s,int e){
    int i = s-1;
    int j = s;
    int pivot = a[e];
    for( ;j<e;j++){
        if(a[j]<=pivot){
            i++;
            swap(a[j],a[i]);
        }
    }
    //Bring the Pivot Element to proper index
    swap(a[i+1],a[e]);
    return i+1;
}

void quickSort(int *a,int s,int e){
    //Base Condition
    if(s>=e)
       return;
       
    //Get the position of Pivot Element
    int p = partition(a,s,e);
    
    //Call the function recursively to apply the same for two parts of Array
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
    
}

int main()
{
    int a[100];
    cout<<"Please Enter the Size of Array"<<endl;
    int n;
    cin>>n;
    cout<<"Please Enter the Elements in the Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Elements in the Array are:- "<<endl;
    for(int i=0;i<n;i++){
        
    }
    
    //function call
    quickSort(a,0,n-1);
    
    //Sorted Elements in the Array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
