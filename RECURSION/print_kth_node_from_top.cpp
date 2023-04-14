//APPROCH 1

void approch_1(Node * head,k,size,count)
{

    int ans=size-k;

    if(head==NULL)
    {
        return;
    }

    if(count==ans)
    {
       cout<<(head->val);
    }
    approch_1(head->next,k,size,count+1);

}

count=0;
size if alredy pass in the function



// APPROCH 2


void approch_2(Node * head, int &k)
{
    if(head==NULL)
    {
        return;
    }

    approch_2(head->next,k);
    
    k--;

    if(k==0)
    {
        cout<< (head->val);
    }


}