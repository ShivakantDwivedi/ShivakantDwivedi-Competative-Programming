/*


2
5 6
1 2 3 4 5
6 7
1 2 3 4 5 6
Sample Output 1:
2
3
Explanation for Sample Output 1:
In test case 1, there exist only 2 pairs whose sum is equal to ‘TARGET’ i.e (1, 5) and (2, 4).

In test case 2, there are 3 pairs whose sum is equal to ‘TARGET’ which are  (1, 6), (2, 5), and (3, 4).
Sample Input 2:
2
4 10
1 3 5 6
5 12
1 3 6 9 11
Sample Output 2:
-1
 2
Explanation for Sample Output 2:
In test case 1, there is not a pair whose sum is equal to ‘TARGET’. So we return -1.

In test case 2, there are 2 pairs whose sum is equal to ‘TARGET’, (1, 11) and (3, 9) respectively.


*/

#include <iostream>
using namespace  std;
int pairSum(int *arr, int n, int target)
{
    int start=0;
    int end=n-1;
    int count=0;
    while(start<end)
    {
        if(arr[start]+arr[end]>target)
        {
            end--;
        }
        else if(arr[start]+arr[end]<target)
        {
            start++;
        }
        else
        {
          count++;  
            start++;
            end--;
        }
    }
    if(count==0)
        return -1;
    else
        return count;
}
int main(){
    cout<<"Enter the size of an array"<<endl;
    int n;
    cin>>n;
    int *arr=new int [n];
    cout<<"Enter the element in an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the target"<<endl;
    int k;
    cin>>k;
    int ans =pairSum(arr,n,k);
    cout<<ans<<" ";
    return 0;
}