#include <iostream>
using namespace std;

class Node {      //  yaha ek node bani hau jiske andar ek data store kr rhs hai or doo prev and next address store kr rhe hai

    public:
    int data;  
    Node *prev; // ye dono pointer hai jo ki address store  kr rhe hai
    Node *next;

    Node(int data)
    {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;

    }


};


void print(Node  * &head) // traversing a node
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getlength(Node *&head)
{
    int length=0;
   Node *temp=head;
    while(temp!=NULL)
    {   
       length++;
        temp=temp->next;
    }
    return length;
}

void insert_at_head(Node * &head, int data)
{
    Node * temp=new Node (data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}


void insert_at_tail(Node * &tail , int data)
{
    Node *temp=new Node (data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}


int main(){

    Node *node1=new Node(10);
    Node *head=node1;
    Node *tail=node1;


    print(head);

    cout<<getlength(head)<<endl;

    insert_at_head(head,20);
    print(head);

     insert_at_head(head,30);
    print(head);


     insert_at_head(head,40);
    print(head);


     insert_at_head(head,50);
    print(head);

    insert_at_tail(tail,900);
    print(head);




    return 0;
}