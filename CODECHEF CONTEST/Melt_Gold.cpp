/*



Problem
Chef has an ore with melting point of 
�
X degrees.
Chef’s kiln has a initial temperature of 
�
Y degrees. The temperature of the kiln increases by 
�
i degrees after the 
�
�
ℎ
i 
th
  minute.

Find the minimum time in minutes after which the ore starts melting.

Note:

We are only concerned about the temperature at the end of each minute and not during a minute.
The ore starts melting if the temperature of the kiln becomes greater than or equal to the melting point.
Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of two space-separated integers 
�
X and 
�
Y — the melting point of the ore and the initial temperature of kiln.
Output Format
For each test case, output on a new line, the minimum time in minutes after which the ore starts melting.

Constraints
1
≤
�
≤
1
0
5
1≤T≤10 
5
 
1
≤
�
<
�
≤
1
0
5
1≤Y<X≤10 
5
 
Sample 1:
Input
Output
3
3 2
5 3
10 5
1
2
3
Explanation:
Test case 
1
1: The initial temperature of the kiln is 
2
2 and the melting point of ore is 
3
3.
After first minute, the temperature of kiln increases by 
1
1.
Thus, after 
1
1 minute the temperature of kiln becomes 
2
+
1
=
3
2+1=3, which is equal to the melting point. Thus, the ore starts melting.

Test case 
2
2: The initial temperature of the kiln is 
3
3 and the melting point of ore is 
5
5.
After first minute, the temperature of kiln increases by 
1
1, and becomes 
4
4.
After second minute, the temperature of kiln increases by 
2
2, and becomes 
6
6.

Thus, after 
2
2 minutes the temperature of kiln becomes 
6
6, which is greater than the melting point. Thus, the ore starts melting.

Test case 
3
3: The initial temperature of the kiln is 
5
5 and the melting point of ore is 
10
10.
After first minute, the temperature of kiln increases by 
1
1, and becomes 
6
6.
After second minute, the temperature of kiln increases by 
2
2, and becomes 
8
8.
After third minute, the temperature of kiln increases by 
3
3, and becomes 
11
11.

Thus, after 
3
3 minutes the temperature of kiln becomes 
11
11, which is greater than the melting point. Thus, the ore starts melting.

accepted
Accepted
11171
total-Submissions
Submissions
19947
accuracy
Accuracy
58.97




*/


#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int count=1;
	    y++;
	    while(y<x)
	    {
	        count++;
	        y=y+count;
	    }
	    cout<<count<<endl;
	    
	    
	}
	return 0;
}
