void print(Node* head)
{
    if(head==NULL)
    {
        return;
    }

    cout<<(head->data)<<endl;
    print(head->next);
}