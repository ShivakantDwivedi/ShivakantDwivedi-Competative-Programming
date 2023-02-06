#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int product=1;
    while(n){
        int digit=n%10;
        sum=sum+digit;
        product=product*digit;
        n=n/10;
    }
    int ans=product-sum;
    cout<<ans;
  

}