#include <iostream>

using namespace std;

int resAdd(string s){
    int sum=0;
    int num=0;
    for(int i=0;i<s.size();i++){
        if(s[i]-'0'<=9){
            num=num*10 + (s[i]-'0');
        }
        else{
            sum = sum+num;
            num=0;
        }
    }
    sum = sum+num;
    return sum;
}

int main()
{
    string s ="Gl123a45ssd908oo6r";
    cout<<resAdd(s);

    return 0;
}

//can also be done by
#include <iostream>

using namespace std;

int resAdd(string s){
    int sum=0;
    string str="";
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            str=str+s[i];
        }
        else{
            sum = sum+atoi(str.c_str());
            str="";
        }
    }
    sum = sum+atoi(str.c_str());
    return sum;
}

int main()
{
    string s ="Gl123a45ssd908oo6r";
    cout<<resAdd(s);

    return 0;
}
