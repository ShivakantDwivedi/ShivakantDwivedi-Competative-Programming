/*


Given a matrix of size r*c. Traverse the matrix in spiral form.

Example 1:

Input:
r = 4, c = 4
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}}
Output: 
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
Explanation:

Example 2:

Input:
r = 3, c = 4  
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12}}
Output: 
1 2 3 4 8 12 11 10 9 5 6 7
Explanation:
Applying same technique as shown above, 
output for the 2nd testcase will be 
1 2 3 4 8 12 11 10 9 5 6 7.



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



















