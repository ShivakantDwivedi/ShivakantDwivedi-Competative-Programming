#include <iostream>
using namespace std;

class Node {

    public:
    int data;
    Node *next;


    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    
};

void insert_at_head(Node* &head,int d) 
{
    Node *temp=new Node(d); // yha pe ek temp name ka temporary node banayee ge 
    temp->next=head; // temp ke next ke andar head ki valuee daalne hai
    head=temp; // phir temp vali head ko point kare ga

}


void insert_at_tail(Node* &tail, int d)
{                                     
    Node *temp=new Node (d);
    tail->next=temp;
    tail=temp;

}



void insert_at_position(Node *&tail,Node *  &head, int position, int d) // ye function hai insert at any position 
                                                        // bs esme sirph first and last node pe insert nhi kr pai ge
{

    if (position==1) // agr fisrt position pe insert karn ahai
    { 
        insert_at_head(head,d);
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
        insert_at_tail(tail,d);
        return ;
    }

    Node *insert_at_position=new Node(d);

    insert_at_position->next=temp->next;
    temp->next=insert_at_position;
}

void deletion(Node * &head, int position)
{
    if(position ==1)
    {
        Node *temp=head;
        head->next=head;
        temp->next=NULL;
        delete temp;
    }  

    else
    {
        Node *current=head;
        Node* prev=NULL;

        int count=1;
        while(count < position)
        {
            prev=current;
            current=current->next;
            count++;
        }

        prev->next=current->next;
        current->next=NULL;
        delete current;
    }
}

void print(Node* &head )
{
    Node *temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    Node* node1=new Node(10);

    Node *head=node1;
    Node *tail=node1;

    print(head);
    insert_at_tail(tail, 20);
     print(tail);

    insert_at_tail(tail, 30);
     print(tail);

    insert_at_tail(tail, 40);
     print(tail);

     insert_at_position(tail,head,3,22);
     print(head);

     insert_at_position(tail,head,1,100); // ye hai agr pahle position pe node innsert karna hai tb ke liye
     print(head);

      insert_at_position(tail,head,7,200); // ye hai agr last position pe node innsert karna hai tb ke liye
     print(head);

     deletion(head,3);
     print(head);

     


    return 0;

}