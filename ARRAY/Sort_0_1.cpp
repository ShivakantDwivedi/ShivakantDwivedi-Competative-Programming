# <iostream>
using namespace std;
void sincludeort0(int arr[],int n)
{
    int left=0;
    int right=n-1;
    while(left<right)
    {
        while(arr[left]==0 && left<right)
        {
            left++;
        }
        while(arr[right]==1 && left<right)
        {
            right--;
        }

        if(left<right) // jb uppar wali condition nhi hai to bachi kya ki left me 1 ho ga or right me 0 ho ga
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }

}

void print(int arr[],int n)
{
    cout<<"Final Answer is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}


int main(){
    int number[100];
    int size;
    cout<<"Enter the size of an element"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    
    sort0(number,size);
    print(number,size);
    return 0;
}