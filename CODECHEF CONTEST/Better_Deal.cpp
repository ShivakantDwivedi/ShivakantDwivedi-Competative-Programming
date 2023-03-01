/*
Problem
There are 
2
2 stores in Chefland and both sell the same product. The first store sells the product for 
100
100 rupees whereas the second store sells it for 
200
200 rupees.

It is the holiday season and both stores have announced a special discount. The first store is providing a discount of 
�
A percent on its product and the second store is providing a discount of 
�
B percent on its product.

Chef is wondering which store is selling the product at a cheaper price after the discount has been applied. Can you help him identify the better deal?

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of a single line of input containing two space-separated integers 
�
A and 
�
B denoting the discount provided by the first and second store respectively.
Output Format
For each test case, output FIRST if the first store is cheaper, SECOND if the second store is cheaper, and BOTH if both the stores are selling the product for the same price after discount.

The checker is case-insensitive so answers like FiRsT, first, and FIRST would be considered the same.

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
≤
100
1≤A,B≤100
Sample 1:
Input
Output
4
5 20
10 60
7 7
10 55
FIRST
SECOND
FIRST
BOTH
Explanation:
Test case 
1
1: The first store has a discount of 
5
%
5%. Thus, the final price of product at first store would be 
95
95.
The second store has a discount of 
20
%
20%. Thus, the final price of the product at the second store would be 
160
160. The product at the first store would be cheaper.

Test case 
2
2: The first store has a discount of 
10
%
10%. Thus, the final price of product at first store would be 
90
90.
The second store has a discount of 
60
%
60%. Thus, the final price of the product at the second store would be 
80
80. The product at the second store would be cheaper.

Test case 
3
3: The first store has a discount of 
7
%
7%. Thus, the final price of product at first store would be 
93
93.
The second store has a discount of 
7
%
7%. Thus, the final price of the product at the second store would be 
186
186. The product at the first store would be cheaper.

Test case 
4
4: The first store has a discount of 
10
%
10%. Thus, the final price of product at first store would be 
90
90.
The second store has a discount of 
55
%
55%. Thus, the final price of the product at the second store would be 
90
90. The product at both stores would have same price.

accepted
Accepted
14612
total-Submissions
Submissions
19647
accuracy
Accuracy
78.31


*/



#include <iostream>
using namespace std;

int main() {
        int t;
        cin>>t;
        while(t--)
        {
            int a;
            int b;
            cin>>a;
            cin>>b;
            int first = 100 - a;
            int second = 200 - (2*b);
            if( first < second)
            {
                cout<<"FIRST"<<endl;
            }
            else if (second < first)
            {
                cout<<"SECOND"<<endl;
            }
            else
            {
                cout<<"BOTH"<<endl;
            }
        }
	return 0;
}
