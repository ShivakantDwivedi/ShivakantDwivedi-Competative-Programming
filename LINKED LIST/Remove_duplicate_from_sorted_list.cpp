/*
Remove Duplicates From Sorted List
Contributed by
Anshul Garg
Easy
40/40
Share
73 upvotes
Problem Statement
Detailed explanation ( Input/output format, Notes, Constraints, Images )
Sample Input 1 :
2
1 2 2 3 -1
1 2 3 4 -1
Sample Output 1 :
1 2 3 -1
1 2 3 4 -1
Explanation For Sample Input 1 :
For test case 1, we will return 1 -> 2 -> 3 -> NULL, because : 
We will delete the duplicate value ‘2’ present in the linked list, and finally return the following list:
1 -> 2 -> 3


For test case 2, we will return 1 -> 2 -> 3 -> 4 -> NULL, because the input list contains no duplicates, so we will return it as it is.
Sample Input 2 :
2
1 -1
2 5 5 5 5 -1 
Sample Output 2 :
1 -1
2 5 -1

*/


/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/

Node * uniqueSortedList(Node * head) {
    if(head==NULL)
    {
        return NULL;
    }

    Node *curr=head;
    while(curr!=NULL)
    {
        // matlabh ki node hi na ho esi liye curr->next!=NULL hona cahea 
        // tabhi hi aage check ho ga
        if((curr->next!=NULL) && curr->data==curr->next->data)
        {
            Node *next_to_next=curr->next->next;
            Node*delete_next=curr->next;
            delete(delete_next);
            curr->next=next_to_next;

        }
        else
        {
            curr=curr->next;
        }
    }
        return head;
}