/*
As we know, Rishabh has a love for chocolates.
 He has bought a huge chocolate bar which contains N chocolate squares. 
 Each of the square has a tastiness level which is denoted by an array A[]. 
 Rishabh can eat the first or the last square of the chocolate at once.
 Rishabh has a sister Neha, who loves chocolates too and she demands the last chocolate square.
 Now, Rishabh being greedy eats the more tasty square first.
Determine the tastiness level of the square which Neha gets.
Input: First line of input contains a single integer T denoting the number of test cases.
The first line of each test case contains an integer N. 
The second line contains N space-separated integers denoting the array A.
 Output: For each test case, print the required answer in a new line.

input 7 8 9 6 1 4 
output 1

*/




#include <iostream>
#include <algorithm>
using namespace std;

int chocklate(int *arr , int n)
{
    int element =arr[n-1];
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
        return i;
    }
}

int main(){
    int arr[6]={7,8,9,6,1,4};
    cout<<chocklate(arr,6);
    return 0;

}