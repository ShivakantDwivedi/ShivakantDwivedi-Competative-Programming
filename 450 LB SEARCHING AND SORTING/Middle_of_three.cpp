/*
Given three distinct numbers A, B and C. Find the number with value in middle (Try to do it with minimum comparisons).


Example 1:

Input:
A = 978, B = 518, C = 300
Output:
518
Explanation:
Since 518>300 and 518<978, so 
518 is the middle element.

Example 2:

Input:
A = 162, B = 934, C = 200
Output:
200
Exaplanation:
Since 200>162 && 200<934,
So, 200 is the middle element.
*/





#include <iostream>
#include <algorithm>
using namespace  std;

int middle_of_three(int n,int m,int k)
{
    int arr[3]={n,m,k};
    sort(arr,arr+3);
    return arr[1];
}



int main()
{
    int n,m,k;
    cout<<"Enter the first number"<<endl;
    cin>>n;
     cout<<"Enter the second number"<<endl;
    cin>>m;
     cout<<"Enter the third number"<<endl;
    cin>>k;
    int ans1=middle_of_three(n,m,k);
    cout<<"Answer is"<<ans1<<endl;
    return 0;
}