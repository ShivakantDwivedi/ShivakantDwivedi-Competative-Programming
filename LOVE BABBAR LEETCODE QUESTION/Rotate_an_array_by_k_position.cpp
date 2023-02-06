#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int  rotate_by_k_position(vector<int>ans,int position)
{
    vector<int>temp;
    int m=temp.size();
    for(int i=0;i<ans.size();i++)
    {
        temp[(i+position)/m]=ans[i];
    }
        ans=temp;
        return ans;
  
}


void print(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}


int main(){
   vector<int>v;
   int size;
   cout<<"Enter  the size of an vector"<<endl;
   cin>>size;
    int m;
    cout<<"Enter the element in the vector"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>m;
        v.push_back(m);
    }
    int position;
    cout<<"Enter the position"<<endl;
    cin>>position;
    cout<<rotate_by_k_position(v,position);
    print(v);
    
    return 0;
}