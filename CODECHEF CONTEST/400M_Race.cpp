/*

Problem
Alice, Bob, and Charlie participated in a 
400
400-metre race.
The time taken by Alice, Bob, and Charlie to complete the race was 
�
,
�
,
X,Y, and 
�
Z seconds respectively. Note that 
�
,
�
,
X,Y, and 
�
Z are distinct.

Determine the person having the highest average speed in the race.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains three space-separated integers 
�
,
�
,
X,Y, and 
�
Z — the time taken by Alice, Bob, and Charlie to complete the race.
Output Format
For each test case, output on a new line:

ALICE, if Alice had the highest average speed.
BOB, if Bob had the highest average speed.
CHARLIE, if Charlie had the highest average speed.
Note that you may print each character in uppercase or lowercase. For example, the strings BOB, bob, Bob, and BoB are all considered identical.

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
,
�
,
�
≤
100
1≤X,Y,Z≤100
�
,
�
,
X,Y, and 
�
Z are distinct.
Sample 1:
Input
Output
3
1 2 8
4 100 1
7 3 5
ALICE
CHARLIE
BOB

*/


#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int first, second,  third,race;
	  cin>>first;
	  cin>>second;
	  cin>>third;
      if(first < second && first < third)
      cout<<"ALICE"<<endl;
      else if (second < first && second < third)
      cout<<"BOB"<<endl;
      else
      cout<<"CHARLIE"<<endl;
	}
	return 0;
}

