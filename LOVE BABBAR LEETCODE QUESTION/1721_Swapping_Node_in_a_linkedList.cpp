/*
1721. Swapping Nodes in a Linked List
Medium
3.6K
122
Companies
You are given the head of a linked list, and an integer k.

Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).

 

Example 1:


Input: head = [1,2,3,4,5], k = 2
Output: [1,4,3,2,5]
Example 2:

Input: head = [7,9,6,6,7,8,3,0,9,5], k = 5
Output: [7,9,6,6,8,7,3,0,9,5]
 

Constraints:

The number of nodes in the list is n.
1 <= k <= n <= 105
0 <= Node.val <= 100
Accepted
201.7K
Submissions
299.6K
Acceptance Rate
67.3%


*/


class Solution {
public:

/*

eska main logic hai ki left and rightt pointer kth starting 
and kth last position pe place karna to ham count =1 se 
compair karaye ge or usi ke hisab se aage badaye ge dono pointer ko agr count ki value choti ho gi k se to aaage bade ga agr badi ho gi to  right wala bhi aage badhe ge or curr bhi aage badhe ga 
or count bhi badtha rahe ga ye sb ek loop ke andar hi ho ga



*/




    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr=head;
        ListNode* left=head;
        ListNode* right=head;
        int count=1;
        while(curr!=NULL)
        {
            if(count<k)
            {
                left=left->next;
            }
            if(count>k)
            {
                right=right->next;
            }
             curr=curr->next;
            count++;
        }
        int temp=right->val;
        right->val=left->val;
        left->val=temp;
        return head;
       
    }
};