/*

input 1 2 3 4
      9 4 5 6 

output 1 0   6  9  0
      


we have to add two array


*/

#include <iostream>
#include <vector>
using namespace std;

void add_two_array(int arr[100],int n, int m)
{
    vector<int>ans;
    int i=n-1;  // last walli value ki baat kr rha hai
    int j=m-1;
    int sum;
    int carry=0;
    
    while(i>=0 && j>=0)
    {
        int value1=arr[i];
        int value2=arr[j];
        sum=value1+value2+carry;
        carry=sum/10; // carry ko add kr rha hai
        sum=sum%10; 
        ans.push_back(sum);
        i--;
        j--;
    }

    while(i>=0) // agr i wale array ki value badi ho to
    {
        sum=arr[i]+carry;
        carry=sum/10; // carry ko add kr rha hai
        sum=sum%10; 
        ans.push_back(sum);
        i--;
    }

      while(j>=0) // agr j wale array ki value badi ho to
    {
        sum=arr[j]+carry;
        carry=sum/10; // carry ko add kr rha hai
        sum=sum%10; 
        ans.push_back(sum);
        j--;

    }


    while(carry!=0) // agr carry 0 ke barabbar na ho to 
    {
        sum=carry;
        carry=sum/10; // carry ko add kr rha hai
        sum=sum%10; 
        ans.push_back(sum);
    }
    int start=0;
    int end=ans.size()-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }   
}





int main(){
    int arr[100];
    int n,m;
    cout<<"Enter the size of an array 1"<<endl;
    cin>>n;
    cout<<"Enter the size of an array 2"<<endl;
    cin>>m;
    cout<<"Enter the element in array1"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     cout<<"Enter the element in array2"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    add_two_array(arr,n,m);
    return 0;
}
