#include <iostream>
using namespace std;

class Node{

        public:
        int data;
        Node* left;
        Node* right;

        Node(int d)
        {
            this->data=d;
            this->left=left;
            this->right=right;
        }
};


Node * builtroot(Node *root)
{

    cout<<"Enter the element"<<endl;
    int data;
    cin>>data;

    root=new Node(data);

    if(data==-1)
    {
        return NULL;

    }

    cout<<"Enter the left Node data"<<" "<< data<<endl;
    root->left= builtroot(root->left);
    cout<<"Enter the right Node data"<<" "<<data<<endl;
    root->right=builtroot(root->right);
        return root;
}

void postorder(Node *root)
{
    // base case
    if (root == NULL)
    return;

   
    postorder(root->left);
    postorder(root->right);
     cout<<root->data<<" ";
}



int main(){
    
    Node * root=NULL;
    root=builtroot(root);

    cout<<"postorder IMPLEMENTATION"<<endl;
    postorder(root);
   
    return 0;

}