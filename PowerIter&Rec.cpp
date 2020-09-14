//Iterative solution


#include<iostream>
using namespace std;
int power(int x, int y) {
   int i,power=1;
   if(y == 0)
   return 1;
   for(i=1;i<=y;i++)
   power=power*x;
   return power;
}
int main() {
   int x = 3;
   int y = 4;
   cout<<"x = "<<x<<endl;;
   cout<<"y = "<<y<<endl;
   cout<<"x^y = "<<power(x,y);
   return 0;
}

//Recursive Solution

#include<iostream>
using namespace std;
int power(int x, int y) {
   if (y == 0)
   return 1;
   else if (y%2 == 0)
   return power(x, y/2)*power(x, y/2);
   else
   return x*power(x, y/2)*power(x, y/2);
}
int main() {
   int x = 3;
   int y = 4;
   cout<<"x = "<<x<<endl;;
   cout<<"y = "<<y<<endl;
   cout<<"x^y = "<<power(x,y);
   return 0;
}
