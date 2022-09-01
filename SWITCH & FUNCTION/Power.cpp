#include <iostream>
using namespace std;
int power(int n){
    int a;
    cout<<"Enter the power"<<endl;
    cin>>a;
    int ans=1;
    for(int i=1;i<=a;i++)   // essme jittni power  nikali  hai usko utni baar multiply kiya jaata hai  
    {
        ans=ans*n;  // ye asli logic hai power  nikalne ka 
    }
    return ans;

}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans=power(n);
    cout<<ans;
    return 0;
}

// Method 2
/* #include <iostream>
#include <math.h>
using namespace std;
int power(int n){
    int a;
    cout<<"Enter the power"<<endl;
    cin>>a;
    int ans=pow(n,a);
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans=power(n);
    cout<<ans;
    return 0;
}*/
