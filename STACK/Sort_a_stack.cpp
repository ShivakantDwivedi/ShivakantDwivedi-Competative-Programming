/*

Sort a Stack
Contributed by
Shivam Kumar Singh
Easy
40/40
Avg time to solve 10 mins
Success Rate 90 %
Share
159 upvotes
Problem Statement
Detailed explanation ( Input/output format, Notes, Constraints, Images )
Sample Input 1:
1
5
5 -2 9 -7 3
Sample Output 1:
9 5 3 -2 -7
Explanation Of Sample Input 1:
9 Is the largest element, hence it’s present at the top. Similarly 5>3, 3>-2 and -7 being the smallest element is present at the last. 
Sample Input 2:
1
5
-3 14 18 -5 30
Sample Output 2:
30 18 14 -3 -5
Explanation Of Sample Input 2:
30 is the largest element, hence it’s present at the top. Similarly, 18>14, 14>-3 and -5 being the smallest element is present at the last. 



*/


#include <bits/stdc++.h> 

void insert_element(stack<int>&stack, int num)
{

	if(stack.empty() || ( !stack.empty() && stack.top() < num ))
	{
		stack.push(num);
		return;
	}

	int n=stack.top();

	stack.pop();

	insert_element(stack,num);

	stack.push(n);



}
void sortStack(stack<int> &stack)
{
	if(stack.empty())
	{
		return;
	}

	int num=stack.top();

	stack.pop();

	sortStack(stack);

	insert_element(stack, num);

}