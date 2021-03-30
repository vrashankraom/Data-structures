class Solution {
public:
    string getPermutation(int n, int k) {
        
        //Vector to hold the numbers from 1 to n
        vector<int>nums;
        int fact=1;
        
        //Factorial of (n-1)th number
        for(int i=1;i<n;i++){
            fact=fact*i;
            nums.push_back(i);
        }
        
        //Push the nth number
        nums.push_back(n);
        k=k-1;
        
        //String to hold answer and return
        string ans = "";
        while(true){
            
            //Add the individual number to answer
            ans = ans + to_string(nums[k/fact]);
            
            //Remove the number from array
            nums.erase(nums.begin() + (k/fact));
            
            //if no numbers in array exists, then break from loop
            if(nums.size()==0){
                break;
            }
            
            //change k and fact value for next number
            k = k%fact;
            fact = fact / nums.size();
        }
        return ans;
    }
};
