/*
19. Remove Nth Node From End of List
Medium
15K
623
Companies
Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

Example 1:


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]
 

Constraints:

The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz
 

Follow up: Could you do this in one pass?

Accepted
1.9M
Submissions
4.7M
Acceptance Rate
40.9%



*/


APPROCH 1


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *start = new ListNode();
        start ->next = head;
        ListNode * first=start;
        ListNode* last=start;

        for(int i=1;i<=n;i++)
        {
            first=first->next;
        }
        // tab tk dono pointer ko aage move karaye ge 
        // tb tk first->next !=NULL
        while(first->next != NULL)
        {
            last=last->next;
            first=first->next;
        }
        last->next=last->next->next;
        return start->next;
    }
};