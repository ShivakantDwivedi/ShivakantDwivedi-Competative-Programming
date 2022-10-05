#include <iostream>
#include <vector>
using namespace std;


void solve(vector<int>&str , vector<vector<int>>&ans, int index )
{
    // base condition
    if(index>=str.size())
    {
        ans.push_back(str); //  yaha pe nums pe jo value hai vo store ho rhi hai
        return;
    }
    else
    {
        for(int i=index;i<str.size();i++)
        {
            swap(str[index],str[i]);
            solve(str,ans,index+1);
            // backtracking
            swap(str[index],str[i]); // yaha pe main game chal rha hai jb backtracking karne ke badd
                    // wapas aata hai solve function ke pass tb index +1 hota hai.
        }
    }
}
void permutation(vector<int>&str)
{
    vector<vector<int>>ans;
    int index=0;
    solve(str,ans,index);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    
}




int main(){
  
    vector<int>str;
    int m;
    cout<<"Enter the size of the number"<<endl;
    int n;
    cin>>n;
      cout<<"Enter the number"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        str.push_back(m);
    }
    permutation(str);

  
    return 0;
}