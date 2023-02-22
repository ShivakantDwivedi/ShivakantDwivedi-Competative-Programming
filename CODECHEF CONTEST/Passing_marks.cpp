/*

Problem
In a class of 
�
N students, a class test was held. The 
�
�
ℎ
i 
th
  student scored 
�
�
A 
i
​
  marks. It is also known that the scores of all students were distinct.

A student passes the test if their score is strictly greater than the passing mark. Given that exactly 
�
X students pass in the test, find the maximum value of the passing mark of the test.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers 
�
N and 
�
X — the number of students in the class and the number of students that passed in the test.
The next line contains 
�
N space-separated integers 
�
1
,
�
2
,
…
,
�
�
A 
1
​
 ,A 
2
​
 ,…,A 
N
​
 , where the 
�
�
ℎ
i 
th
  integer denotes the marks of the 
�
�
ℎ
i 
th
  student.
Output Format
For each test case, output on a new line, the maximum value of the passing mark of the test.

Constraints
1
≤
�
≤
100
1≤T≤100
1
≤
�
≤
100
1≤N≤100
1
≤
�
≤
�
1≤X≤N
1
≤
�
�
≤
100
1≤A 
i
​
 ≤100
All elements of array 
�
A are distinct.
Sample 1:
Input
Output
3
2 2
5 1
4 1
5 1 7 4
4 3
15 70 100 31
0
6
30
Explanation:
Test case 
1
1: Since both students pass the test, both students scored greater than passing marks. The maximum value of passing marks can be 
0
0, as both students have marks greater than 
0
0.

Test case 
2
2: Only one student passes the test. Thus, the third student has passed the test by scoring 
7
7 marks. The passing marks of the test is 
6
6.

Test case 
3
3: Since three students pass the test, students 
2
,
3
,
2,3, and 
4
4 scored greater than passing marks. The maximum value of passing marks can be 
30
30, three students have marks greater than 
30
30.

accepted
Accepted
10543
total-Submissions
Submissions
16236
accuracy
Accuracy
68.01

*/

// Approch 1 MY



/*
#include <iostream>
#include <algorithm>
using namespace std;

void ans(int n,int x,int *arr)
{
    sort(arr,arr+n);
    int i=n-1;
    int j=0;
    int count=1;
    while(j<=i)
    {
        if(count==x)
        {
            cout<<arr[i]-1<<endl;
            break;
        }
        i--;
        count++;
    }
}

int main() {
	    int t;
	    cin>>t;
	    while(t--)
	    {
	        int n,x;
				cin>>n>>x;
	        int arr[n];
	        
	        for(int i=0;i<n;i++)
	        {
	            cin>>arr[i];
	        }
	        ans(n,x,arr);
	    }
	return 0;
}

*/

// APPROCH 2

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	    int t;
	    cin>>t;
	    while(t--)
	    {
	        int n,x;
	         cin>>n>>x;
	        int arr[n];
	       
	        for(int i=0;i<n;i++)
	        {
	            cin>>arr[i];
	        }
	       sort(arr,arr+n);
	       int temp=n-x;
	       cout<<(arr[temp]-1)<<endl;
	    }
	return 0;
}

