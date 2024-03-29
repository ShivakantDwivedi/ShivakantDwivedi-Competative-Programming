/* 
Given a positive integer N, print count of set bits in it. 

Example 1:

Input:
N = 6
Output:
2
Explanation:
Binary representation is '110' 
So the count of the set bit is 2.
Example 2:

Input:
8
Output:
1
Explanation:
Binary representation is '1000' 
So the count of the set bit is 1.

*/



#include <iostream>
using namespace std;
int set_bit(int n)
{
    int  count=0;
    while(n>0)
    {
    if(n&1)
    {
        count++;
    }
    n=n>>1;
    }
    return count;
}


int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans=set_bit(n);
    cout<<ans;
    return 0;
}