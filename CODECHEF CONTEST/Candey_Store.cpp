/*

Problem
Chef has started working at the candy store. The store has 
100
100 chocolates in total.

Chef’s daily goal is to sell 
�
X chocolates. For each chocolate sold, he will get 
1
1 rupee. However, if Chef exceeds his daily goal, he gets 
2
2 rupees per chocolate for each extra chocolate.

If Chef sells 
�
Y chocolates in a day, find the total amount he made.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of two space-separated integers 
�
X and 
�
Y — the daily goal of Chef, and the number of chocolates he actually sells.
Output Format
For each test case, output on a new line the total amount Chef made in a day.

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
,
�
≤
10
1≤X,Y≤10
Sample 1:
Input
Output
4
3 1
5 5
4 7
2 3
1
5
10
4
Explanation:
Test case 
1
1: Chef's daily goal was 
3
3. Since he sold only 
1
1 chocolate, he'll get only 
1
1 rupee.

Test case 
2
2: Chef's daily goal was 
5
5. Since he sold 
5
5 chocolates, he'll get 
5
5 rupees.

Test case 
3
3: Chef's daily goal was 
4
4. Since he sold 
7
7 chocolate, he'll get 
4
4 rupees for the 
4
4 chocolates as his daily goal and 
2
2 rupees per chocolate for the extra 
3
3 chocolates. The total amount he gets is 
4
+
3
⋅
2
=
10
4+3⋅2=10.

Test case 
4
4: Chef's daily goal was 
2
2. Since he sold 
3
3 chocolate, he'll get 
2
2 rupees for the 
2
2 chocolates as his daily goal and 
2
2 rupees per chocolate for the extra 
1
1 chocolate. The total amount he gets is 
2
+
1
⋅
2
=
4
2+1⋅2=4.

accepted
Accepted
684
total-Submissions
Submissions
868
accuracy
Accuracy
79.38

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
	       if(x>=y)
	       {
	           cout<<(y*1)<<endl;
	       }
	       else if (x<y)
	       {
	            cout<< ((x*1)+((y-x)*2)) <<endl;
	       }
	   }
	
	return 0;
}
