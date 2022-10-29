#include <iostream>
using namespace std;

class Node  {

    public:
    int data;
    Node* next;

    Node(int d) {
            this->data=d;
            this->next=NULL;
    }

};


void  insert (Node *&tail , int element , int data)
{
    if(tail==NULL) // agr linked list empty  ho to ye kare ge
    {
        Node *node1=new Node (data);
        tail=node1;
        node1->next=node1;
    }

    // matlabh ki linked lisst empty nhi hai
    else
    {
        Node *current=tail;

        while(current->data!=element)
        {
            current=current->next;
        }
    
    // eska mtlabh hai elememt found ho chukka hai

        Node *temp=new Node (data);
        
        temp->next=current->next;
        current->next=temp;


    }
}

void print(Node *tail)
{
    Node *temp=tail;
    do
    {
        cout<<tail->data;
        tail=tail->next;
    } while (tail!=temp);
    cout<<endl;

    
}

int main(){

    Node * tail =new Node (12);


    print(tail);

    insert(tail,12,22);

    print(tail);




    return 0;

}