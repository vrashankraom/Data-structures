
#include<bits/stdc++.h>

using namespace std;

int findDuplicate(vector<int>& nums) {
        int tortoise =nums[0];
        int hare=nums[0];
        do{
           hare = nums[nums[hare]];
           tortoise=nums[tortoise];
        }
        while(tortoise!=hare);
        hare=nums[0];
        while(tortoise!=hare){
            tortoise = nums[tortoise];
            hare=nums[hare];
        }
        return hare;
}

int main(){
    
    int n;
    cin>>n;
    int a;
    int dup;
    int sum=0;
    int actuals;
    vector<int>nums;
    for(int i=1;i<=n;i++){
        cin>>a;
        sum=sum+a;
        nums.push_back(a);
    }
    dup=findDuplicate(nums);
    cout<<dup<<" is the duplicate numeber "<<endl;
    actuals = (n*(n+1))/2;
    int rem = actuals - sum;
    cout<<rem+dup<<" is the missing number "<<endl;
    
    
    return 0;
    
}        
