/*

Problem
The budget of Technex'23 is 
�
R thousand rupees. Since ICM is their flagship event, they will allocate at least half of their budget to it.

There are 
5
5 other events planned under Technex'23.
The team wants to distribute the remaining amount equally among these.
Find the maximum amount in rupees that could be allocated to each of the other five events.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
The first and only line of each test case contains a single integer 
�
R, the budget of Technex'23 in thousand rupees.
Output Format
For each test case, output a single integer on a new line, the maximum amount in rupees that could be allocated to each of the other five events.

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
3000
1≤R≤3000
Sample 1:
Input
Output
3
20
43
133
2000
4300
13300
Explanation:
Test case 
1
1: The budget of Technex'23 is 
20000
20000 rupees. If ICM is allocated 
10000
10000 rupees and the remaining 
10000
10000 rupees is distributed among the other events, each will have a budget of 
2000
2000 rupees, which is the maximum possible.

Test case 
2
2: The budget of Technex'23 is 
43000
43000 rupees. If 
21500
21500 rupees is allocated to ICM, the rest of the events can each be alloted 
4300
4300 rupees.

Test case 
3
3: The budget of Technex'23 is 
133000
133000 rupees. If 
66500
66500 rupees is allocated to ICM, the rest of the events can each be alloted 
13300
13300 rupees.

accepted
Accepted
17838
total-Submissions
Submissions
21357
accuracy
Accuracy
87.77




*/


#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int ans;
        int res;
        int R;
        cin>>R;
        ans=(R*1000)/2;
        res=ans/5;
        cout<<res<<endl;
    }
	return 0;
}
