/*
24. Swap Nodes in Pairs
Medium
9.2K
354
Companies
Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

 

Example 1:


Input: head = [1,2,3,4]
Output: [2,1,4,3]
Example 2:

Input: head = []
Output: []
Example 3:

Input: head = [1]
Output: [1]
 

Constraints:

The number of nodes in the list is in the range [0, 100].
0 <= Node.val <= 100


*/

class Solution {
public:


    ListNode* swapPairs(ListNode* head) {
        ListNode* curr=head;
        ListNode* next = NULL;
        ListNode* prev=NULL;

       int count=0;
        while( curr !=NULL &&  count<2 )
        {
            next=curr->next; 
            // ye aage vali node pe jaa ke fix
            // kr de ga 
            curr->next=prev;
            // phir prev and curr ko aage badha dena hai 
            prev=curr;
            curr=next;
            count++;
        } 

        if(head != NULL)
        {
    //  phri yaha pe head ke next ko add kr dena hai
            head->next=swapPairs(next);
        } 
        return prev;
    }
};
