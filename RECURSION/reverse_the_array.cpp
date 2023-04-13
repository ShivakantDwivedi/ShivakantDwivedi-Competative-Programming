/*Approcch 1*/
#include <iostream>
using namespace std;

//Approch 1
void reversesolve(int *arr,int size,int index)
{
    if(index==size)
    {
        return ;
    }
  
    reversesolve(arr,size,index+1);
      cout<<arr[index]<<" ";
}

//Approch2

void reverse_approch2(int *arr,int size,int index)
{
    if(index < 0)
    {
        return;
    }
    cout<<arr[index]<<" ";
    reverse_approch2(arr,size,index-1);
}

int main(){
    int arr[]={4,5,6,7,7};
    int size=5;
    
    //Approch1
    reversesolve(arr,size,0);
    cout<<endl;

    reverse_approch2(arr,size,size-1);
}



