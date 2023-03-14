/*


86. Partition List
Medium
5.2K
616
Companies
Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

You should preserve the original relative order of the nodes in each of the two partitions.

 

Example 1:


Input: head = [1,4,3,2,5,2], x = 3
Output: [1,2,2,4,3,5]
Example 2:

Input: head = [2,1], x = 2
Output: [1,2]
 

Constraints:

The number of nodes in the list is in the range [0, 200].
-100 <= Node.val <= 100
-200 <= x <= 200
Accepted
441K
Submissions
849.6K
Acceptance Rate
51.9%



*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* list1= new ListNode(0);
        ListNode* list2= new  ListNode(0);

        ListNode * l1=list1;
        ListNode *l2=list2;

        while(head)
        {
            if(head->val < x)
            {
                l1->next=head;
                l1=l1->next;
            }
            else
            {
                l2->next=head;
                l2=l2->next;
            }
            head=head->next;
        }

        l1->next=list2->next;
        l2->next=NULL;
        return list1->next;

    }
};