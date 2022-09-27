// input abcd output dcba

#include <iostream>
using namespace std;

void reverse(string &str,int i,int j)
{
    if(i>j)
    {
        return ;
    }
    else
    {
        swap(str[i],str[j]);
        i++;
        j--;
        reverse(str,i,j);
    }
}


int main(){
   cout<<"Enter the string"<<endl;
   string str;
   getline (cin,str); // getline tb tk input le ga jb tk ki enter na mil jai or eske anadr space bhi include hote hai but cin se space dabae ge to null le ge or aage nhi jai ga
    reverse(str,0,str.length()-1);
    cout<<str;
    return 0;
}