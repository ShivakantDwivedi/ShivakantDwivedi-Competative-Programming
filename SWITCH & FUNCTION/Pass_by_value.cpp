/// Pass by value
#include  <iostream>
using namespace std;
void dummy(int n){ // esme n ki value ki copy store ho gi
    n++;            
    cout<<n<<endl;  // tabhi yaha n ki value inncrement ho gyi
}


int main(){
    int n;
    cin>>n;
    dummy(n);
    cout<<n;   // yaha pe n ki original value store ho rhi hai
    return 0;
}