#include <iostream>
using namespace std;

int sum(int &j)
{
    j++;
    return j;
}


int main(){
    int i=5;
    int &j=i;
    cout<<"Address of "<<&i<<endl;
    cout<<"Addres of j "<<&j<<endl;
    j=j+1;
    cout<<"Before"<<j<<endl;
    sum(j);
    cout<<"After"<<j<<endl;
    return 0;

}