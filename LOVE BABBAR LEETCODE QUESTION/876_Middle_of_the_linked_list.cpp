/*

876. Middle of the Linked List
Easy
8.8K
255
Companies
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

 

Example 1:


Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
Example 2:


Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
 

Constraints:

The number of nodes in the list is in the range [1, 100].
1 <= Node.val <= 100
Accepted
1.2M
Submissions
1.6M
Acceptance Rate
75.2%

*/

class Solution {
public:

// esme ham slow and fast doo pointer ka use kare ge or slow ek step move kare ge fast do do 
// move kare ga or phir slow ko return karna hai

    ListNode* middleNode(ListNode* head) {
        ListNode*slow=head, *fast=head;
        while(fast != NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
        
    }
};