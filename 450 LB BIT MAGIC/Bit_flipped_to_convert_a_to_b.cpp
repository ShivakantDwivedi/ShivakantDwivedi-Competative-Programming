/*
You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.

Example 1:

Input: A = 10, B = 20
Output: 4
Explanation:
A  = 01010
B  = 10100
As we can see, the bits of A that need 
to be flipped are 01010. If we flip 
these bits, we get 10100, which is B.
Example 2:

Input: A = 20, B = 25
Output: 3
Explanation:
A  = 10100
B  = 11001
As we can see, the bits of A that need 
to be flipped are 10100. If we flip 
these bits, we get 11001, which is B.
*/




#include <iostream>
using namespace std;
int flip_bit(int n,int m)
{

    int count=0;
    while(m||n)
    {
        if(m%2 != n%2)
        {
            count++;
        }
        n=n/2;
        m=m/2;
    }
    return count;

}
int main(){
    int n;
    cout<<"Enter the first number"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the second number"<<endl;
    cin>>m;
   cout<<flip_bit(n,m);
    return 0;
}