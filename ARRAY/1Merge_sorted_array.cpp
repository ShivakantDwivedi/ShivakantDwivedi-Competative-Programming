#include <iostream>
#include <vector>
using namespace std;

void merge_sorted_array(vector<int> &arr,int n,vector<int>&brr,int m,vector<int>&ans) // ans es liye kiye hai because function call ke time hame usme store karana hai value 
{      //esme vector function ke andar vector ka address pass karte hai tabhi ham modification kr paaye ge
    
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m)
    {
        if(arr[i]<brr[j])
        {
            ans[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            // ans.push_back(brr[j]);
            ans[k]=brr[j];
            j++;

        }
    }

    while(i<n)
    {
        // ans.push_back(arr[i]);
        ans[k]=arr[i];
        i++;
        k++;
    }
    while(j<m)
    {
        // ans.push_back(brr[j]);
        ans[k]=brr[j];

        j++;
        k++;
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
    vector<int>v(size+size2);
   merge_sorted_array(arr,m,brr,n,v);



    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;

}