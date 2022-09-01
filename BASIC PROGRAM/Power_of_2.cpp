#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans;
    bool  ispower=1; 
    for(int i=0;i<=30;i++)
    {
        ans=pow(2,i);
        if(n==ans){ // esme agr value ans save ho jaiga to print kara lege
        ispower=0;  
        break;
        }
    }
    if(ispower==0)
    cout<<"Correct";
    else
    cout<<"Incorrect";
    
    

}