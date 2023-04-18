/*


APPROCH 1

Node *reversed(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    Node chotahead=reversed(head);

    head->next->next=head;
    head->next=NULL;

    return chotahead;
}





*/