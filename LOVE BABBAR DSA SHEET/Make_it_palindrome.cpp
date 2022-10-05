/*
Sample Input-1
2
3
1 2 1
5
1 2 3 4 1
Sample Output-1
0
2
Explanation For Sample Input 1:
For test case 1:
    The given array is already a palindrome. Hence the answer is 0.
For test case 2:
    We select indexes 3 and 4 to merge. The array will look like [1, 2, 7, 1].
    We select indexes 2 and 3 to merge. The array will look like [1, 9, 1].
    Now the array is a palindrome. Hence the answer will be 2.
Sample Input -2
2
1
8
3
1 3 3
Sample Output -2
0
2
*/




#include <iostream>
#include <vector>
using namespace std; 
int palindrome(vector<int> A)
{
   long long  int s=0;
   long long int e=A.size()-1;
    int ans=0;
    while(s<e)
    {
        if(A[s]==A[e])
        {
            s++;
            e--;
        }
        else if(A[s]<A[e])
        {
            s++;
            A[s]=A[s]+A[s-1];
            ans++;
        }
        else
        {
             e--;
            A[e]=A[e]+A[e+1];
            ans++;
        }
    }
    return ans;
}


int main(){
    cout<<"Enter the size of the vector array"<<endl;
    vector<int>temp;
    int n;
    cin>>n;
    cout<<"Enter the element in  an vector "<<endl;
    int m;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        temp.push_back(m);
    }
    int ans=palindrome(temp);
    cout<<ans<<endl;
    return 0;
}


















