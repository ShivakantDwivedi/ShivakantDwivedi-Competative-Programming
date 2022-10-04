/*

Sample Input 1:
2
5
1 -4 -2 5 3
2
2 1    
Sample Output 1:
Yes
Yes
Explanation For Sample Input 1:
For the first test case we have, array: [1, -4, -2, 5, 3] and N = 5. On rearranging the array such that all negative numbers appear before all positive numbers we get the resulting array [-2, -4, 1, 5, 3].

For the second test case we have, array: [2, 1] and N = 2. There are no negative numbers. Hence, we do not require any rearrangement.
Sample Input 2:
3
4
1 -5 -5 3
5
-1 -2 3 4 5
1
-2
Sample Output 2:
Yes 
Yes
Yes
Explanation For Sample Input 2:
For the first test case we have, array: [1, -5, -5,  3] and N = 4. On rearranging the array such that all negative numbers appear before all positive numbers we get the resulting array [-5, -5, 1, 3].

For the second test case we have, array: [-1, -2, 3, 4, 5] and N = 5. There are already arranged in required way. Hence, we do not require any rearrangement.

For the third test case we have, array: [-2 ] and N = 1. The array is already arranged in required way. Hence, we do not require any rearrangement.


*/

#include <iostream>
using namespace std;

void  move_negative_element(int *arr, int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            swap(arr[i],arr[j++]);
        }
    }
}

void print(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}


int main(){
    cout<<"Enter the size of an array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the element in an arry"<<endl;
    int *arr=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    move_negative_element(arr,n);
    print (arr,n);
    return 0;
}
    
























