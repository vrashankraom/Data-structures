//No need of vector

#include <bits/stdc++.h>

using namespace std;

string reverseWord(string temp){
    int start=0;
    int end = temp.size()-1;
    
    while(start<end){
        swap(temp[start],temp[end]);
        start++;
        end--;
    }
    return temp;
}

void reverseStringWithDots(string s){
    string temp="";
    string result="";
    
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='.'){
            result = result+reverseWord(temp);
            result=result+'.';
            temp="";
        }
        else{
        temp = temp+s[i];
        }
    }
    result = result+reverseWord(temp);
    cout<<result;
    
}

int main()
{
    string s="hello.man.im.vrashank";
    //getline(cin,s);
    reverseStringWithDots(s);
    return 0;
}






//we use vectors here and push back all the words.then print all the words int reverse
#include <bits/stdc++.h> 
using namespace std; 

int main(){
    
    vector<string>temp;
    string s="hello.man.im.vrashank";
    string str="";
    for(int i=0;i<s.length();i++){
        if(s[i]== '.'){
            temp.push_back(str);
            str="";
        }
        
        else{
            str=str+s[i];
        }
    }
   temp.push_back(str);
    for(int i=temp.size()-1;i>0;i--){
        cout<<temp[i]<<".";
    }
    cout<<temp[0];
    
    
    return 0;
}
