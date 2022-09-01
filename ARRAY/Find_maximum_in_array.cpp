#include <iostream>
using namespace std;
void  maximum(int number[],int size)
{
    int max=INT16_MIN;
    for(int i=0;i<size;i++)
    {
        if(number[i]>max)
        {
            max=number[i];
        }
    }
    cout<<max;
    
}
int main(){
    int number[100];
    cout<<"Enter the size of array"<<endl;
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    maximum(number,size);
    return 0;
}