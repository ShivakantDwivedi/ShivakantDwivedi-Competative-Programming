#include <iostream>
using namespace std;
int linearsearch(int number[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(number[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
int main(){
    int number[100];
    int  size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    int ans=linearsearch(number,size,key);
    if(ans)
    cout<<"Key is found";
    else
    cout<<"Key is not  found";
    return 0;
}