#include <iostream>
#include<algorithm>
using namespace std;

 void  reverse_string(char name[],int n)
{
    int start=0;
    int end=n-1;

    while(start<end)
    {
        swap(name[start],name[end]);
        start++;
        end--;
    }

} 


int get_length(char name[])
{
    int count=0;
    for(int i=0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}


int main(){
    char name[20];
    cout<<"Enter the name"<<endl;
    cin>>name;
    cout<<"Your name is "<<name<<endl;
    int length=get_length(name);
    cout<<length;
    reverse_string(name,length);
    cout<<"Your name is "<<name<<endl;
    return 0;

}