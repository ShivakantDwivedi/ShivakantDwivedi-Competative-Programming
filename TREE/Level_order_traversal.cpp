#include <iostream>
#include <queue>
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



void level_order(Node *root)
{
    queue<Node*>ans;
   ans.push(root);
   ans.push(NULL);

    while(!ans.empty())
    {
        Node *temp=ans.front();
        
        ans.pop();

        if(temp==NULL)
        {
            cout<<endl;

            if(!ans.empty())
            {
                ans.push(NULL);
            }
        }

        else
        {
        cout<<temp->data<<" ";
        if(temp->left)
        {
            ans.push(temp->left);
        }

        if(temp->right)
        {
            ans.push(temp->right);
        }
    }
}
}





int main(){
    
    Node * root=NULL;
    root=builtroot(root);

    cout<<"PRINTING LEVEL ORDER TRAVERSAL"<<endl;
    
    level_order(root);
   
    return 0;

}