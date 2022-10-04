/*
Sample Input 1:
2
2 2
1 2
3 4  
2 1
2 3
3
Sample Output 1:
0 4
1 2
Sample Output 1 Explanation:
Test case 1:

‘ARR1’ is [1,2]
‘ARR2’ is [3,4] 
Elements common to ‘ARR1’ and ‘ARR2’ are []. Therefore the number of elements common to ‘arr’ and ‘brr’ is 0. 
The union of ‘ARR1’ and ‘ARR2’ is [1,2,3,4]. Therefore the number of distinct elements in the union of ‘ARR1’ and ‘ARR2’ is 4.

Therefore the answer is 0 4.

Test case 2:

‘ARR1’ is [2,3].
‘ARR2’ is [3] 
Elements common to ‘ARR1’ and ‘ARR2’ are [3]. Therefore the number of elements common to ‘ARR1’ and ‘ARR2’ is 1. 
The union of ‘ARR1’ and ‘ARR2’ is [2,3]. Therefore the number of distinct elements in the union of ‘ARR1’ and ‘ARR2’ is 2.

Therefore the answer is 1 2.
Sample Input 2:
2
5 3
1 2 3 4 5
4 6 2
1 2
1
3 2
Sample Output 2:
2 6
0 3


NOTE : no element in present twise in an array;


include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr1[i]==arr2[j])
            {
                count++;
            }
        }
    }
    return {count,(n+m-count)}; // main yahi hai count nikal ke total array se minus kr do
                                // count hai kitni common element hai
    */

#include <iostream>
using namespace std;

int common(int *arr, int *brr , int n, int m)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i]==brr[j])
            {
                count++;
            }
        }
    }
    return count;
}

int similar(int *arr, int *brr , int n, int m)
{
     int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i]==brr[j])
            {
                count++;
            }
        }
    }
    int temp=n+m-count;
    return temp;
    

}




int main(){
    cout<<"Enter the size of an array1"<<endl;
    int n;
    cin>>n;
     cout<<"Enter the size of an array2"<<endl;
    int m;
    cin>>m;
    int *arr=new int [n];
    cout<<"Enter the element in an array1"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    
    }
    int *brr=new int [n];

    cout<<"Enter the elememt in an array2 "<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
    }
    int ans1=common(arr,brr,n,m);
    int ans2=similar(arr,brr,n,m);
    cout<<ans1<<" "<<ans2<<endl;
    return 0;    
}