/*

Sample Input 1 :
2
4 4
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16
3 6
1 2 3 4 5 6 
7 8 9 10 11 12 
13 14 15 16 17 18
Sample Output 1 :
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11
Explanation Of The Sample Input 1 :
The spiral path for the test case 2 is as shown below:

Sample Input 2 :
2
1 1
4
1 5
1 2 3 4 5
Sample Output 2 :
4
1 2 3 4 5
Explanation Of The Sample Input 2:
In the first test case, there is only one element in the matrix, so the spiral path is only that element.

In the second test case, there is only one row or 1-D matrix, so the spiral path is only the single traversal of the matrix.

*/

#include <iostream>
#include  <vector>
using namespace std;


void spiral_printing(int arr[][100],int n,int m)
{
    int startingRow=0;
    int startingCol=0;
    int EndingRow=n-1;
    int EndingCol=m-1;
    vector<int>ans;
    int count=0;
    int total=n*m;
    while(count<total)
    {
        for(int i=startingCol; count<total && i<=EndingCol;i++)
        {
            ans.push_back(arr[startingRow][i]);
            count++;
        }
          startingRow++;

        for(int i=startingRow;  count<total   && i<=EndingRow;i++)
        {
            ans.push_back(arr[i][EndingCol]);
            count++;
        }
        EndingCol--;

        for(int i=EndingCol;   count<total   && i>=startingCol;i--)
        {
            ans.push_back(arr[EndingRow][i]);
            count++;
        }
        EndingRow--;

        for(int i=EndingRow;count<total && i>=startingRow;i--)
        {
            ans.push_back(arr[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    
}

int main(){
    int arr[100][100];
    int n,m;
    cout<<"Enter the no.of row"<<endl;
    cin>>n;
    cout<<"Enter the no. of col"<<endl;
    cin>>m;
    cout<<"Enter the value in an array"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Printing Matrix"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    spiral_printing(arr,n,m);
    return 0;
}