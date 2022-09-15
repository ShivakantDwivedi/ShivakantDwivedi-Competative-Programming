/*
204. Count Primes
Medium

5543

1100

Add to List

Share
Given an integer n, return the number of prime numbers that are strictly less than n.

 

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
Example 2:

Input: n = 0
Output: 0
Example 3:

Input: n = 1
Output: 0


*/

#include <iostream>
#include <vector>
using namespace std;
 void sieve_of_Erastonesis(int n)
 {
    vector<bool>prime(n+1,true);
    int count=0;
    prime[0]=prime[1]=false;

    for(int i=2;i<n;i++)
    {
        if(prime[i])
        {
            count++;
        }
        for(int j=i*2;j<n;j=j+i)
        {
            prime[j]=0;
        }
    }
    cout<<"No. of Element which is not prime"<<endl;
   cout<<count<<endl;

 }

int main(){
    cout<<"Enter the number "<<endl;
    int n;
    cin>>n;
    sieve_of_Erastonesis(n);
    return 0;
}