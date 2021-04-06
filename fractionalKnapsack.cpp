#include <bits/stdc++.h>

using namespace std;

struct Item{
    int value;
    int weight;
};

//Comparator funtion to return the descending fractional numbers

bool comp(Item item1,Item item2){
    double r1 = (double)item1.value/(double)item1.weight;
    double r2 =(double)item2.value/(double)item2.weight;
    return r1>r2;
}
int knapsack(int W,Item k[],int n){
    sort(k,k+n,comp);
    
    double final=0.0;
    int cur=0;
    
    for(int i=0;i<n;i++){
        if(cur+k[i].weight<=W){
            cur = cur + k[i].weight;
            final = final + k[i].value;
        }
        
        // if there is still some capacity in the bucket, we take a fractio of the next item
        else{
            int rem = W-cur;
            final = final + ((double)k[i].value/(double)k[i].weight)*(double)rem;
            break;
        }
    }
    return final;
}

int main()
{
    int n;
    cin>>n;
    Item k[n];
    for(int i=0;i<n;i++){
        cin>>k[i].value;
    }
    for(int i=0;i<n;i++){
        cin>>k[i].weight;
    }
    int W;
    cin>>W;
    cout<<endl<<knapsack(W,k,n);
    return 0;
}
