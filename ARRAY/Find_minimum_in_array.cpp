#include <iostream>
using namespace std;
void minimum(int number[],int  size)
{
    int mini=INT8_MAX;
    for(int i=0;i<size ;i++)
    {
        if(number[i]<mini)
        {
            mini=number[i];
        }
    }
    cout<<mini;
    



}
int main(){
    int number[100];
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    minimum(number,size);
    return 0;
}