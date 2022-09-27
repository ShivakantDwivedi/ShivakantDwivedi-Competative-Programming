#include <iostream>
using namespace std;

int  fibonacci(int n)
{
    int ans;
    // base case 
    if(n==0) // ye index value diya hai
    return 0;
    if(n==1)
    return 1;

    else
    {
         ans=fibonacci(n-1)+fibonacci(n-2); // eska dry run tree ke formate me ho ga
    }
    return ans;

}


int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;  //  esme indexing 0 se start ho gi 
                                 // agr term se start krna hai to ya 1 se to function call me n-1 kr dena hai   
    return 0;
}