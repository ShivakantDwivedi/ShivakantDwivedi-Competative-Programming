/*

Problem
Alice and Bob recently got into running, and decided to compare how much they ran on different days.

They each ran for 
�
N days — on the 
�
�
ℎ
i 
th
  day, Alice ran 
�
�
A 
i
​
  meters and Bob ran 
�
�
B 
i
​
  meters.

On each day,

Alice is unhappy if Bob ran strictly more than twice her distance, and happy otherwise.
Similarly, Bob is unhappy if Alice ran strictly more than twice his distance, and happy otherwise.
For example, on a given day

If Alice ran 
200
200 meters and Bob ran 
500
500, Alice would be unhappy but Bob would be happy.
If Alice ran 
500
500 meters and Bob ran 
240
240, Alice would be happy and Bob would be unhappy.
If Alice ran 
300
300 meters and Bob ran 
500
500, both Alice and Bob would be happy.
On how many of the 
�
N days were both Alice and Bob happy?

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of three lines of input.
The first line of each test case contains a single integer 
�
N — the number of days.
The second line of each test case contains 
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
  — the distances run by Alice on the 
�
N days.
The third line of each test case contains 
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
B 
1
​
 ,B 
2
​
 ,…,B 
N
​
  — the distances run by Bob on the 
�
N days.
Output Format
For each test case, output on a new line the number of days when both Alice and Bob were happy.

Constraints
1
≤
�
≤
1000
1≤T≤1000
1
≤
�
≤
100
1≤N≤100
1
≤
�
�
,
�
�
≤
1
0
5
1≤A 
i
​
 ,B 
i
​
 ≤10 
5
 
Sample 1:
Input
Output
4
3
100 200 300
300 200 100
4
1000 1000 1000 1000
400 500 600 1200
4
800 399 1400 532
2053 2300 3400 23
5
800 850 900 950 1000
600 800 1000 1200 1400
1
3
0
5
Explanation:
Test case 
1
1: Alice is unhappy on the first day, since she ran 
100
100 meters but Bob ran 
300
300; and 
300
300 is more than twice of 
100
100.
Similarly, Bob is unhappy on the third day.
Both Alice and Bob are happy on the second day, so the answer is 
1
1.

Test case 
2
2: Bob is unhappy on day 
1
1 and happy on every other day, while Alice is happy on every day. So, they're both happy on three days — the second, third, and fourth.

Test case 
3
3: Alice is unhappy on days 
1
,
2
,
3
1,2,3 and Bob is unhappy on day 
4
4.

Test case 
4
4: Alice and Bob are both happy on all five days.

accepted
Accepted
7798
total-Submissions
Submissions
9195
accuracy
Accuracy
88.02
Did you like the problem statement?
10 users found this helpful



*/


#include <iostream>
using namespace std;


void ans(int *arr , int *brr , int n)
{
    int count=0;
    for(int i=0 ; i<n ; i++)
    {
      if(arr[i] > brr[i])
      {
          if( arr[i] <= (2*brr[i]) )
          {
              count++;
          }
      }
      else if (arr[i]  < brr[i])
      {
          if( (2*arr[i] ) >= brr[i])
          {
              count++;
          }
      }
      else
      {
          count++;
      }
    }
    cout<<count<<endl;
}

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        cin>>brr[j];
    }
    ans(arr,brr,n);
    }
    
	return 0;
}
