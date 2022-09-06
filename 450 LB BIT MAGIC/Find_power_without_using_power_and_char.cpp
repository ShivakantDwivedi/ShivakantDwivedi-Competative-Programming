/*
Given an integer n, calculate the square of a number without using *, / and pow(). 

Examples : 

Input: n = 5
Output: 25

Input: 7
Output: 49

Input: n = 12
Output: 144
*/





#include <iostream>
using namespace std;

int power(int n)
{
    int res=n;
    for(int i=1;i<n;i++)
    {
        res=res+n;
    }
    return res;
}

int main(){
    int n;
    cout<<"Enter the number whose power"<<endl;
    cin>>n;
    cout<<"Power of number is "<<power(n);
    return 0;
}