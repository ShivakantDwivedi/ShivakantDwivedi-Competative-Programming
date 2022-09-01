#include  <iostream>
#include <vector>
using namespace std;

void sum(int arr[], int n)
{
    vector<int>ans;
    int size=ans.size();
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        ans.push_back(sum);
    }
    for(int i=0;i<size;i++)
    {
        cout<<ans;
    }

}



int main(){
    int number[100];
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<"Enter the element in an array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }

    sum(number,size);
    return 0;
}