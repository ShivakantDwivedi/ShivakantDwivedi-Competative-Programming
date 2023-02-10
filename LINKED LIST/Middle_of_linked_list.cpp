/*
Middle Of Linked List
Contributed by
Ashwani
Easy
40/40
Avg time to solve 20 mins
Success Rate 80 %
Share
129 upvotes
Problem Statement

Detailed explanation ( Input/output format, Notes, Constraints, Images )
Sample Input 1 :
2
1 2 3 4 5 -1
4 0 32 5 48 6 -1
Sample Output 1 :
3
5
Explanation Of Sample Input 1 :
For the first test case:

The linked List is 1->2->3->4->5->NULL
We can clearly see that there are 5 elements in the linked list and the middle element is 3 hence we return a pointer poiniting to the middle element i.e 3.

For the second test case:

The linked List is : 4->0->32->5->48->6->NULL

We have 6 elements in the linked list. we will have 2 middle elements i.e 32 and 5. Since it is specified to return the element farther from the root node, we return 5.
Sample Input 2 :
2
2 69 7 -1
1 4 5 8 9 6 3 -1
Sample Output 2 :
69
8
*/


#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

int get_lenght(Node *head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}

Node *findMiddle(Node *head) {
    int length=get_lenght(head);
    int ans=(length/2) ;

    Node *temp=head;
    int curr=0;
    while (curr< ans) {
      temp = temp->next;
      curr++;
    }
    return temp;
}
    