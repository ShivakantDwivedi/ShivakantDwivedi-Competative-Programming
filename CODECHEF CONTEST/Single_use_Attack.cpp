/*

Problem
Chef is playing a video game, and is now fighting the final boss.

The boss has 
�
H health points. Each attack of Chef reduces the health of the boss by 
�
X.
Chef also has a special attack that can be used at most once, and will decrease the health of the boss by 
�
Y.

Chef wins when the health of the boss is 
≤
0
≤0.
What is the minimum number of attacks needed by Chef to win?

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
The first and only line of each test case will contain three space-separated integers 
�
,
�
,
�
H,X,Y — the parameters described in the statement.
Output Format
For each test case, output on a new line the minimum number of attacks needed by Chef to win.

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
<
�
≤
�
≤
100
1≤X<Y≤H≤100
Sample 1:
Input
Output
4
100 25 40
100 29 45
46 1 2
78 15 78
4
3
45
1
Explanation:
Test case 
1
1: Chef can attack the boss 
4
4 times normally. This results in 
25
+
25
+
25
+
25
=
100
25+25+25+25=100 damage, which is enough to defeat the boss.

Test case 
2
2: Chef can attack the boss 
2
2 times normally, then use the special attack. This results in 
29
+
29
+
45
=
103
29+29+45=103 damage, which is enough to defeat the boss.

Test case 
3
3: Chef can proceed as follows:

First, use the special attack. This leaves the boss with 
46
−
2
=
44
46−2=44 health.
Then, use 
44
44 normal attacks to defeat the boss, since each one does 
1
1 damage.
This takes a total of 
44
+
1
=
45
44+1=45 attacks.

Test case 
4
4: Chef can use the special attack to immediately bring the health of the boss to zero, hence only needing one attack.

accepted
Accepted
9833
total-Submissions
Submissions
13380
accuracy
Accuracy
76.53
Did you like the problem statement?
30 users found this helpful


*/

#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        int hi, x,ya;
        cin>>hi>>x>>ya;
        hi=hi - ya;
        if(hi % x ==0)
        {
            cout<< 1+hi/x<<endl;
        }
        else
        {
            cout<<2+hi/x<<endl;
        }
    }
  
	return 0;
}

