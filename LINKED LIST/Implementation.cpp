#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;


// Constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    


};


int main(){

    Node *node =new Node(10);
    cout<<node -> data <<endl; // ye adress ki value print kara raha hai kyoki vo pointer hai
    cout<<node -> next <<endl;

    return 0;


}