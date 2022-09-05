#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



long long int  find_sorted_array(int arr[],int n,int brr[],int m,int k)
{
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        ans.push_back(arr[i]);
    }
    for(int i=0;i<m;i++)
    {
        ans.push_back(brr[i]);
    }
    sort(ans.begin(),ans.end());

   return ans[k-1];

}


int main(){
    int arr[100];
    long long  int size1;
    cout<<"Enter the size of an element"<<endl;
    cin>>size1;
    cout<<"Enter the sorted element in an array"<<endl;
    for(int i=0;i<size1;i++)
    {
        cin>>arr[i];
    }
    int brr[100];
   long long int size2;
    cout<<"Enter the size 2 of an element"<<endl;
    cin>>size2;
    cout<<"Enter the sorted element in an array 2"<<endl;
    for(int i=0;i<size2;i++)
    {
        cin>>brr[i];
    }
    cout<<"Enter the key of an element"<<endl;
   long long int k;
    cin>>k;
   int ans1=find_sorted_array(arr,size1,brr,size2,k);
   cout<<ans1<<" ";
    return 0;
}