int max(int *arr,int size,int index)
{
    if(size==index)
    {
        return INT_MIN;
    }

    int mera_ans=arr[index];
    int find_by_recursion=max(arr,size,index+1);
    int main_ans=max(mera_ans,find_by_recursion);

}


MY APPROCH 



void solve(int *arr,int size,int index,int &maxi)
{
    if(index==size)
    {
        return;
    }

    int maxi=max(maxi,arr[index]);
    solve(arr,size,index+1,maxi);

}

int main(){
    int size=6;
    maxi=INT_MIN;
    int arr[]={4,5,6,7,2,9};
    solve(arr,size,0,maxi);
    cout<<maxi;
    
}


