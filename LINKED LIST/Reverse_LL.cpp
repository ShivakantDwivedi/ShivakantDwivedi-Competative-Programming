#include <iostream>
using namespace  std;

class Node{

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

Node* reverse(Node *head, Node *current,Node *prev)
{
    if(head==NULL || head->next==NULL)
    return head;

   // Node *current=head;
   // Node *prev=NULL;
    Node *forward=NULL;

    while(current!=NULL)
    {
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
    }

    return prev;

}

void print(Node* &head) // ye functiom banaya hai print name ka jiske andar head node ki value pass ho rhi hai
{
    Node *temp=head; // head vali value ko copy kr rha hai temp me

    while(temp!=NULL) // tb tk chale ga jb tk temp null na ho jai
    {
        cout<<temp->data<<" ";
        temp=temp->next; // temp ke next ka address temp me daal dena mtlab node ko aage badh jaana
    }
    cout<<endl;
}

int main() {

    Node *node1=new Node(10); // yaha pe ek node bna liya gya hai jiske andar value 10 dalli hai

    Node* head=node1; // jo node banaya hu uski value head point kr rha hai

    print(head);
   insert_at_head(head,12);
    print(head);

  insert_at_head(head,15);
    print (head);

   Node * revHead=reverse(head,head,NULL); // yaha pe store karna bhi bahut jaarori haai
    print(revHead);

    return 0;

}