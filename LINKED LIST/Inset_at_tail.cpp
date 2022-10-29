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


    return 0;

}