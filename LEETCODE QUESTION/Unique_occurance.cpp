#include <iostream>
using namespace std;
void unique_occurance(int arr[],int n)
{
    int count;
    int i;
    for(int i=0;i<n;i++)
    {
        count=1;
        int element=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(element ==  arr[j])
            {
                count++;
                arr[j]=INT16_MIN;
            }
            else{
                 continue;
            }
            
        }
        cout<<arr[i]<<" "<< "Occures"<<count<<"times"<<endl;
    }
    
}


int main(){
    int number[100];
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the element"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    unique_occurance(number,size);
    return 0;
}