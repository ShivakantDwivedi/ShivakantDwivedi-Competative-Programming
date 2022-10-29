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
    if (head == NULL)
    {
        Node *temp1=new Node (data);
        head=temp1;
    }
    else
    {
 
    Node * temp=new Node (data);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
   
}


void insert_at_tail(Node * &tail , int data)
{

    if(tail==NULL)
    {
         Node *temp2=new Node (data);
        tail=temp2; 
    }
    else
    {
    Node *temp=new Node (data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}

// ye function hai ki kisis bhi position pe insert karna ho agr node kp
void insert_at_any_position(Node *&tail,Node *&head,int position, int data)
{
  
    if (position==1) // agr fisrt position pe insert karn ahai
    { 
        insert_at_head(head,data);
        return;
    }


    Node *temp=head;
    int count=1;

    while(count < position-1)
    {
        temp=temp->next;
        count++;
    }


    if (temp->next == NULL) // agr last position pe nodde insert karna hai 
    {
        insert_at_tail(tail,data);
        return ;
    }

    Node *insert_at_position=new Node(data);

    insert_at_position->next=temp->next;
    temp->next->prev=insert_at_position;
    temp->next=insert_at_position;
    insert_at_position->prev=temp;  
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

    insert_at_any_position(tail,head,3,555);
    print(head);




    return 0;
}