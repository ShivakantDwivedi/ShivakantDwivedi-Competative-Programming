 #include <iostream>
 using namespace std;

int first_position(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
        return i;
        break;
        }
    }
}


int last_position(int arr[],int n,int x)
{
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==x)
        {
            return i;
            break;
        }
    }
}


 int main(){
    
    int number[100];
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the element in array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    cout<<"Enter the key"<<endl;
    int key;
    cin>>key;
    int ans1=first_position(number,size,key);
    int ans2=last_position(number,size,key);
    cout<<ans1<<" "<<ans2;
    return 0;
}
