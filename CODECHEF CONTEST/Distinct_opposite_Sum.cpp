/*

Problem
Given an even integer 
�
N, output a permutation 
�
P of length 
�
N, such that:

The value of 
�
�
+
�
�
+
1
−
�
P 
i
​
 +P 
N+1−i
​
  is distinct for all 
1
≤
�
≤
�
2
1≤i≤ 
2
N
​
 .
It is guaranteed that a possible solution always exists. If multiple such permutations exist, print any.

Note that, a permutation 
�
P of length 
�
N, consists of all integers from 
1
1 to 
�
N exactly once. For example, 
[
2
,
1
,
3
,
4
]
[2,1,3,4] is a permutation, while 
[
2
,
2
,
1
,
3
]
[2,2,1,3] is not.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of a single line containing a single even integer 
�
N.
Output Format
For each test case, output 
�
N space-separated integers, denoting the permutation 
�
P of length 
�
N.

Constraints
1
≤
�
≤
1000
1≤T≤1000
2
≤
�
≤
2000
2≤N≤2000
�
N is even.
Sample 1:
Input
Output
3
2
6
4
2 1
1 3 2 4 5 6
2 1 3 4
Explanation:
Test case 
1
1: Consider the permutation 
�
=
[
2
,
1
]
P=[2,1].
The value 
�
�
+
�
�
+
1
−
�
=
2
+
1
=
3
P 
i
​
 +P 
N+1−i
​
 =2+1=3 for 
�
=
1
i=1, which is distinct.

Test case 
2
2: Consider the permutation 
�
=
[
1
,
3
,
2
,
4
,
5
,
6
]
P=[1,3,2,4,5,6].

For 
�
=
1
i=1: The value 
�
�
+
�
�
+
1
−
�
=
1
+
6
=
7
P 
i
​
 +P 
N+1−i
​
 =1+6=7.
For 
�
=
2
i=2: The value 
�
�
+
�
�
+
1
−
�
=
3
+
5
=
8
P 
i
​
 +P 
N+1−i
​
 =3+5=8.
For 
�
=
3
i=3: The value 
�
�
+
�
�
+
1
−
�
=
2
+
4
=
6
P 
i
​
 +P 
N+1−i
​
 =2+4=6.
Thus, the values are distinct for each 
1
≤
�
≤
�
2
1≤i≤ 
2
N
​
 .

Test case 
3
3: Consider the permutation 
�
=
[
2
,
1
,
3
,
4
]
P=[2,1,3,4].

For 
�
=
1
i=1: The value 
�
�
+
�
�
+
1
−
�
=
2
+
4
=
6
P 
i
​
 +P 
N+1−i
​
 =2+4=6.
For 
�
=
2
i=2: The value 
�
�
+
�
�
+
1
−
�
=
1
+
3
=
4
P 
i
​
 +P 
N+1−i
​
 =1+3=4.
Thus, the values are distinct for each 
1
≤
�
≤
�
2
1≤i≤ 
2
N
​
 .

accepted
Accepted
6554
total-Submissions
Submissions
12762
accuracy
Accuracy
54.43


*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            if(i % 2 == 0)
            {
                cout<<i<<" ";
            }
        }
        for(int i=n;i>=1;i--)
        {
            if(i % 2 !=0)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }

    
	return 0;
}

