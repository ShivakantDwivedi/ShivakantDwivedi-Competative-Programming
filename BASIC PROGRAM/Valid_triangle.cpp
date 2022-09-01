#include <iostream>
using namespace std;
int main(){
    int a,b,c;
   cin>>a>>b>>c;
   if(a+b>c)
   cout<<"Triangle is valid";
   else if (b+c>a)
   cout<<"Triangle is valid";
   else
   cout<<"Triangle is not valid"; 

}