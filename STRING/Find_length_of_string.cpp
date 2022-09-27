#include <iostream>
#include <string>
using namespace std;

int length(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}


int main(){
    char name[20];
    cout<<"Enter the name"<<endl;
    cin>>name;

    cout<<"Printing the name is"<<endl;
    cout<<name<<endl;

    cout<<"Length is  "<<length(name);
    return 0;


}