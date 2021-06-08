
#include<bits/stdc++.h>
using namespace std;

void getTwoSumIndices(vector<int>a,int sum){
    unordered_map<int,int>map;
    
    for(int i=0;i<a.size();i++){
        if(map.find(sum-a[i])!=map.end()){
            cout<<map[sum-a[i]]+1<<" "<<i+1;
            return;
        }
        map[a[i]]=i;
    }
}


int main()
{
    vector<int>a;
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        a.push_back(c);
    }
    
    getTwoSumIndices(a,sum);
    return 0;
}



//To specifically get the two elements
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        vector<int> ans;
       unordered_set<int>s;
       
       for(int i=0;i<nums.size();i++){
           if(s.find(target-nums[i])!=s.end()){
               ans.push_back(nums[i]);
               ans.push_back(target-nums[i]);
               return ans;
          }
           s.insert(nums[i]);
           
       }
        return ans;
    }
};
