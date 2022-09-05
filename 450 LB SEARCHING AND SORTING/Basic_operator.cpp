/* Given two numbers A and B. Perform addition,multiplication, subtraction and division on these two numbers.

Example 1:

Input: A = 1,  B = 2
Output: 3 2 1 2
Explanation:
A + B = 3
A * B = 2
Since B>A, therefore the result of
subtraction and division are
B - A = 1 and B / A = 2 respectively.
*/

#include  <iostream>
#include <vector>
using namespace std;

vector<int> perform_operation(int A,int B)
{
    vector<int>ans;
    ans.push_back(A+B);
    ans.push_back(A*B);
    if(A>B)
    {
        ans.push_back(A-B);
        ans.push_back(A/B);
    }
    else
    {
         ans.push_back(B-A);
        ans.push_back(B/A); 
    }
      return ans;

}

int main(){
    int A,B;
    cout<<"Enter the first number"<<endl;
    cin>>A;
    cout<<"Enter the secong number"<<endl;
    cin>>B;
     vector <int> ans= perform_operation(A,B);
     for(int  i:ans)
     {
        cout<<i<<" ";
     }
    return 0;

}