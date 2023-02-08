#include <iostream>
using namespace std;

class node{

    public:
    int data;
    int *left;
    int *right;


    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};

    node* built_node(node *root)
    {
        cout<<"Enter the data"<<endl;
        int data;
        cin>>data;
        root=new node(data); 

        if(data==-1)
        return NULL;

        cout<<"Enter the Data inserting in left"<<endl;
        root->left=built_node(root->left);
        cout<<"Enter the Data inserting in right"<<endl;
        root->right=built_node(root->right);
        return root;
        
    } 

int main(){
    node *root = NULL;
    root = built_node(root);

    return 0;
}