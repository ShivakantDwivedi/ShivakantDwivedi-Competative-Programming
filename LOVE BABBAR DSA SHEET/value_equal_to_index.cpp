/*

Sample Input 1 :
2
4
-4 -2 2 5
4
-4 -3 -2 -1
Sample Output 1:
2
-1
Explanation for Sample Output 1:
For sample test case 1: 
For ‘i’ = ‘0’, 'NUMARRAY[0]' = -4 which is not equal to index ‘i’, So we don’t include this number in our answer.
For ‘i’ = ‘1’ 'NUMARRAY[1]' = -2 which is not equal to index ‘i’, So we don’t include this number in our answer.
For ‘i’ = ‘2’ 'NUMARRAY[2]' = 2 which is equal to index ‘i’, So we include this number in our answer.
For ‘i’ = ‘3’ 'NUMARRAY[3]' = 5 which is not equal to index ‘i’, So we don’t include this number in our answer.

For sample test case 2: 
For ‘i’ = ‘0’ 'NUMARRAY[0]' = -4 which is not equal to index ‘i’, So we don’t include this number in our answer.
For ‘i’ = ‘1’ 'NUMARRAY[1]' = -3 which is not equal to index ‘i’, So we don’t include this number in our answer.
For ‘i’ = ‘2’ 'NUMARRAY[2]' = -2 which is not equal to index ‘i’, So we don’t include this number in our answer.
For ‘i’ = ‘3’ 'NUMARRAY[3]' = -1 which is not equal to index ‘i’, So we don’t include this number in our answer.
In this sample test case, we didn’t find any such index. So we return ‘-1’. 
Sample Input 2 :
2
4
0 1 2 3
4
-1 1 2 5
Sample Output 2:
0 1 2 3
1 2 
Explanation for Sample Output 2:
For sample test case 1: 
For ‘i’ = ‘0’ 'NUMARRAY[0]' = 0 which is equal to index ‘i’, So we include this number in our answer.
For ‘i’ = ‘1’ 'NUMARRAY[1]' = 1 which is equal to index ‘i’, So we include this number in our answer.
For ‘i’ = ‘2’ 'NUMARRAY[2]' = 2 which is equal to index ‘i’, So we include this number in our answer.
For ‘i’ = ‘3’ 'NUMARRAY[3]' = 3 which is equal to index ‘i’, So we include this number in our answer.


For sample test case 2: 
For ‘i’ = ‘0’ 'NUMARRAY[0]' = -1 which is not equal to index ‘i’, So we don’t include this number in our answer.
For ‘i’ = ‘1’ 'NUMARRAY[1]' = 1 which is equal to index ‘i’, So we include this number in our answer.
For ‘i’ = ‘2’ 'NUMARRAY[2]' = 2 which is equal to index ‘i’, So we include this number in our answer.
For ‘i’ = ‘3’ 'NUMARRAY[3]' = 5 which is not equal to index ‘i’, So we don’t include this number in our answer.

*/

#include <iostream>
#include <vector>
using namespace std;

void  valueEqualToIndices(int *arr, int n)
{
    vector<int>temp;
     for(int i=0;i<n;i++)
    {
        if(arr[i]==i)
        {
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }
}



int main(){
    cout<<"Enter the size of an array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the element in an array"<<endl;
    int *arr=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    valueEqualToIndices(arr, n);
    return 0;
}























