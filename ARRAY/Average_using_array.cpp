#include <iostream> 
using namespace std;
void  average(int number[],int size)
{
        int sum=0;
        for(int i=0;i<size;i++)
        {
            sum=sum+number[i];
        }
        int average=sum/size;
        cout<<average;


}
int main(){
    int number[100];
    cout<<"Enter the size  of an array"<<endl;
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    average(number,size);
    return 0;

}