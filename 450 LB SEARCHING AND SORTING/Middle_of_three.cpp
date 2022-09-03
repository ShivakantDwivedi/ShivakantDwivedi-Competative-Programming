#include <iostream>
#include <algorithm>
using namespace  std;

int middle_of_three(int n,int m,int k)
{
    int arr[3]={n,m,k};
    sort(arr,arr+3);
    return arr[1];
}



int main()
{
    int n,m,k;
    cout<<"Enter the first number"<<endl;
    cin>>n;
     cout<<"Enter the second number"<<endl;
    cin>>m;
     cout<<"Enter the third number"<<endl;
    cin>>k;
    int ans1=middle_of_three(n,m,k);
    cout<<"Answer is"<<ans1<<endl;
    return 0;
}