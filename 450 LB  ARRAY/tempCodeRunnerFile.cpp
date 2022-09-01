long long int maximum(int arr[],int n)
{
    long long int max=0;
    for(int i=1;i<n;i++)
    {
        if(arr[max]<arr[i])
        {
            max=i;
        }
    }
    return arr[max];

}

long long  minimum(int arr[],int n)
{
  long long  min=0;
    for(int i=1;i<n;i++)
    {
        if(arr[min]>arr[i])
        {
            min=i;
        }
    }
    return arr[min];

}

