/*
Insert An Element At Its Bottom In A Given Stack
Easy
40/40
Avg time to solve 15 mins
Success Rate 85 %
Share
55 upvotes
Problem Statement

Detailed explanation ( Input/output format, Notes, Constraints, Images )
Sample Input 1 :
2
3 8
4 3 2
4 5
6 2 4 9
Sample Output 1 :
8 4 3 2
5 6 2 4 9
Explanation For Sample Input 1 :
Test Case 1:

We are  given 'MY_STACK = [4,3,2] and 'X’ = 8.
We insert ‘X’ at the bottom of ‘MY_STACK’. 
So finally, we have 'MY_STACK' = [8, 4, 3, 2]. 

Test Case 2:
After inserting an element at its bottom, the stack will be 5 6 2 4 9
Sample Input 2 :
2
1 0
4 
2 5
1 9
Sample Output 2 :
0 4
5 1 9
Explanation For Sample Input 2 :
Test Case 1:
We are given 'MY_STACK = [4]’ and 'X’ = 0’.
We insert ‘X’ at the bottom of ‘MY_STACK’. 
So finally, 'MY_STACK' will become [0, 4]. 

Test Case 2:
We are given 'MY_STACK = [1,9]’ and 'X’ = 5.
So finally, 'MY_STACK' will become [5, 1, 9]. 


*/

#include <bits/stdc++.h> 


void solve(stack<int>& s, int x)
{
    // base case 
    if(s.empty())
    {
        s.push(x);
        return ;
    }
   int num=s.top();
   s.pop();
   solve(s,x);
   s.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve (myStack,x);
    return myStack ; 
}
