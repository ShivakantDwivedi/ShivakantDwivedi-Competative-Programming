#include <iostream>
using namespace std;
void printsum(int number[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
         sum=sum+number[i];
    }
    cout<<sum;
}
int main()
{
    int number[100];
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    printsum(number,size);
    return 0;
}