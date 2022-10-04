#include <iostream>
#include <vector>
using namespace std;

vector<int>find(vector<int>&ans,int n)
{
    int start=0;
    int end=n-1;
    while (start<=end)
    {
        swap(ans[start++],ans[end--]);
    }
    return ans;
    
    
}

int main(){
    vector<int>ans;
    cout<<"Enter the size "<<endl;
    int n;
    cin>>n;
    int m;
    cout<<"Enter the element "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        ans.push_back(m);
    }
    vector<int>temp=find(ans,n);
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i];
    }

    return 0;
}