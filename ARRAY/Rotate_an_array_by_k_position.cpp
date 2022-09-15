/*


Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]

*/




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

        for(int i=0;i<ans.size();i++)
        {
            cout<<ans.at[i];
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
    rotate_by_k_position(v,position);
    return 0;
}