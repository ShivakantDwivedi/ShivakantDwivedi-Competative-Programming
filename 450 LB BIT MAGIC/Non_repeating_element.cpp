/*
Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct. Find the other two numbers. Return in increasing order.


Example 1:

Input: 
N = 2
arr[] = {1, 2, 3, 2, 1, 4}
Output:
3 4 
Explanation:
3 and 4 occur exactly once.
Example 2:

Input:
N = 1
arr[] = {2, 1, 3, 2}
Output:
1 3
Explanation:
1 3 occur exactly once.
*/




#include <iostream>
#include <algorithm>
using namespace std;

int non_repeating(int arr[],int n)
{
    
    sort(arr,arr+n);
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            i++;
        }
        else{
           cout<<arr[i]<<" ";
        }
        
    }
   
}
int main(){
    int number[6]={1,2,3,2,1,4};
    non_repeating(number,6);
    
    return 0;
}