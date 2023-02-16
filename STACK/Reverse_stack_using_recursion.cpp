
void insert_at_bottom(stack<int> &s, int element)
{

   
    // base case 
    if(s.empty())
    {
        s.push(element);
        return ;
    }
   int num=s.top();
   s.pop();
   insert_at_bottom(s,element);
   s.push(num);
}

void reverseStack(stack<int> &stack) {
    if(stack.empty())
    {
        return ;
    }

    int num=stack.top();
    stack.pop();

    reverseStack(stack);

    insert_at_bottom(stack,num);

}


