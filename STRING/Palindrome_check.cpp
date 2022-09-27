#include <iostream>
using namespace std;

char uppercase_into_lowercase(char n)
{
    char temp;
    if(n>='A'  && n<='Z')
    {
    return  temp=n-'A'+'a';
    }
}


bool palindrome(char name[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        if (uppercase_into_lowercase(name[start])!=uppercase_into_lowercase(name[end]))
        {
        return 0;
        }
        start++;
        end--;
    }
    return 1;

}


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
    char name[100];
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Printing the name "<<name<<endl;
    int key=length(name);
   cout<<palindrome(name,key)<<endl;
    return 0;
}