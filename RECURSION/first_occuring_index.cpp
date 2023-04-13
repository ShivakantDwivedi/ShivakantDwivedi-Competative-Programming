Approch 1

int find(int *arr,int size,int index,int target)
{
    if(index==size)
    {
        return -1;
    }

    if(arr[index]==target)
    {
        return index;
    }
    else
    {
       return find(arr,size,index,target);
    }
}


