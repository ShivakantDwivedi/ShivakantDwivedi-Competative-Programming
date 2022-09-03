#include <iostream>
#include <vector>
using  namespace std;

 vector<int>reverse(vector<int>m )
{
    int n=m.size();
    int start=0;
    int end=n-1;
     while(start<=end)
    {
        swap(m[start],m[end]);
        start++;
        end--;
    }
    return m;
 
}

void print(vector<int>v)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}

int main(){
    
    vector <int> v;
    v.push_back(11);
    v.push_back(14);
    v.push_back(56);
    v.push_back(12);
  

   vector<int>ans= reverse(v);
    print(ans);
    return 0;
}