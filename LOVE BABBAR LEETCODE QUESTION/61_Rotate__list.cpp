/*
61. Rotate List
Medium
7.4K
1.3K
Companies
Given the head of a linked list, rotate the list to the right by k places.

 

Example 1:


Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]
Example 2:


Input: head = [0,1,2], k = 4
Output: [2,0,1]
 

Constraints:

The number of nodes in the list is in the range [0, 500].
-100 <= Node.val <= 100
0 <= k <= 2 * 109
Accepted
696.7K
Submissions
1.9M
Acceptance Rate
36.0%



*/

ListNode* rotateRight(ListNode* head, int k) {
        // edge case
         if(head==NULL || k==0)
         return head;
        ListNode* curr = head;
        int count=0; 
        while(curr->next)
        {
          curr=curr->next;
          count++;
        }
       curr->next=head;
       k=k%(count+1); // edge case
       int jump=count-k;
       curr=head;

       while(jump)
       {
           curr=curr->next;
           jump--;
       }

         ListNode* ans = curr->next;
         curr->next=NULL;
         return ans;
