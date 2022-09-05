#include <iostream>
#include <vector>
using namespace std;


void  merge_sorted_array(vector<int>arr,int n,vector<int>brr,int m)
{
    vector<int>ans;
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(arr[i]<brr[j])
        {
            ans.push_back(arr[i]);
            i++;
        }
        else
        {
            ans.push_back(brr[i]);
            j++;
        }
    }

    while(i<n)
    {
        ans.push_back(arr[i]);
        i++;
    }
    while(j<m)
    {
        ans.push_back(arr[i]);
        j++;
    }
}

void print(vector<int>arr)
{
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}



int main(){
    vector<int>arr;
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;
    int m;
    cout<<"Enter the element in the vector"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>m;
        arr.push_back(m);
    }
     vector<int>brr;
    int size2;
    cout<<"Enter the size"<<endl;
    cin>>size2;
    int n;
    cout<<"Enter the element in the vector2"<<endl;
    for(int i=0;i<size2;i++)
    {
        cin>>n;
        brr.push_back(n);
    }

    merge_sorted_array(arr,m,brr,n);
    print(arr);
    return 0;

}