// input 412 output will be four one two
// input 549 output will be five four nine

#include <iostream>
using  namespace std;

void say_digit(int n,string arr[])
{
    if(n==0)
    {
        return;
    }
    else
    {
        int digit=n%10;
        n=n/10;
        say_digit(n,arr);
        cout<<arr[digit]<<endl;
    
    }
}


int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    say_digit(n,arr);
    return 0;
}