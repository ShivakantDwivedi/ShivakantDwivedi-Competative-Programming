#include <iostream>
using namespace std;
bool isEven()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    // return 0 number is odd , return 1 ans if last bit is 1 is odd nummber
    if(n&1!=0){
        return 0; // number is odd
    }
    else{
        return 1; // number is even and if last bit is 1 is odd nummber
    if(n&1!=0){
    }

}
int main(){
   int ans=isEven();
    if(ans==0)
    cout<<"Number is odd  number";
    else
    cout<<"Number is Even number";
    return 0;

}