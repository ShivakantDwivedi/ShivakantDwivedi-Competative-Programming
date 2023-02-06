// IN this only one number  is come twise ans we have to return that number;
// No two number is present at the twise.

#include <iostream>
using namespace std;
int duplicate(int arr[],int n)
{
    int ans=0;
    // XOR all the element
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    for(int i=1;i<n;i++) // do the XOR with index i=1 to n-1
    {
        ans=ans^i;
    }
    return ans;
}

int main(){
    int number[100];
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    int ans=duplicate(number,size);
    cout<<ans<<endl;
    return 0;
}