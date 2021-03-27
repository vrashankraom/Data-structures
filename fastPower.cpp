#include <iostream>

using namespace std;

int power(int n,int b){
    //Base Condition
    
    if(b==0){
        return 1;
    }
    
    //Recursive Condition
    
    //Time Complexity is b
    return n*power(n,b-1);
}
int fastPower(int n,int b){
    //Base Condition
    if(b==0){
        return 1;
    }
    
    //Recursive condition
    
    //Time Complexity is log(b)
    int powerans = fastPower(n,b/2);
    powerans = powerans*powerans;
    
    if(b&1){
        return n*powerans;
    }
    else{
        return powerans;
    }
}

int main()
{
    cout<<"Enter the value of n and b"<<endl;
    int n;
    int b;
    cin>>n;
    cin>>b;
    cout<<power(n,b)<<endl;
    cout<<fastPower(n,b)<<endl;


    return 0;
}
