/*
Reverse List In K Groups
Contributed by
Vishal Modani
Medium
80/80
Avg time to solve 15 mins
Success Rate 85 %
Share
69 upvotes
Problem Statement
Detailed explanation ( Input/output format, Notes, Constraints, Images )
Sample Input 1:
2
1 2 3 4 5 6 -1
2
5 4 3 7 9 2 -1
4 
Sample Output 1:
2 1 4 3 6 5
7 3 4 5 2 9
Explanation Of The Sample Input1:
For the first test case, we reverse the nodes in groups of two, so we get the modified linked list as 2 1 4 3 6 5.
For the second test case, we reverse the nodes in groups of four. But for the last 2 elements, we cannot form a group of four, so we reverse those two elements only. Hence the linked list becomes 7 3 4 5 2 9.
Sample Input 2:
2
3 2 1 4 5 6 -1
1
4 3 2 8 -1
4 
Sample Output 2:
3 2 1 4 5 6
4 3 2 8


*/

#include <bits/stdc++.h> 

   // Following is the Linked List node structure

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




Node* kReverse(Node* head, int k) {
    if(head==NULL)
    {
        return NULL ;
    }
    Node *prev=NULL;
    Node *next=NULL;
    Node *curr=head;

    int count=0;
    while(curr!=NULL && count<k)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL)
    {
        head->next=kReverse(next,k);
    }
    return prev;

}
