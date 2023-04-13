
approch --
 
 In this we start iterating this array from the last

int last_occuring(int *arr,int size,int index,int target)
{
    if(index<0)
    {
        return -1;
    }

    if(arr[index]==target)
    {
        return index;
    }

    return last_occuring(arr, size, index-1,target);
}