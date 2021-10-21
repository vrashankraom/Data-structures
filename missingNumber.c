// Find missing number in given array of distinct numbers starting from 1

#include<stdio.h>

void main(){
    int a[10],n,i,a1,a2,sum=0;
    
    printf("Enter number of elements: ");
    scanf("%d",&n);
    
    printf("\nEnter %d elements into the array:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    
    a1=(((n+1)*(n+2))/2);
    
    printf("Missing number is: %d",(a1-sum));
}
