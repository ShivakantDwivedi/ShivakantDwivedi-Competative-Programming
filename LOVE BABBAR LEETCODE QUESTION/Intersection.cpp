#include <iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int n,int m){
    
    for(int i=0;i<n;i++)
    {
        int element=arr1[i]; // store in the element
        for(int j=0;j<m;j++)
        {
            if(element==arr2[j])
            {
                 
                cout<<arr2[j]<<" ";
                arr2[j]=INT16_MIN; // make arr2[j] element to some value INT_MIN jisse vo phir na check ho
                break;
            }
        }
       
    }
    
    
    
    
}
int main(){
    int arr1[100];
    int size1;
    cout<<"Enter the size1 of an element";
    cin>>size1;
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    int arr2[100];
    int size2;
    cout<<"Enter the size2 of an element";
    cin>>size2;
    for(int i=0;i<size2;i++)
    {
        cin>>arr2[i];
    }
    intersection(arr1,arr2,size1,size2);
    
    return 0;
}
