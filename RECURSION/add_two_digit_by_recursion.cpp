#include <iostream>
#include <algorithm>
using namespace std;


void solve (string first, string second , int i , int j , int carry , string &ans)
{
    if( i < 0  && j < 0 && carry ==0   )
    {
        return ;
    }

    int pahla=0;
    int dosra=0;

    if(i >= 0)
    {
        pahla = first[i] - '0';

    }

    if(j >= 0)
    {
        dosra = second[j] - '0';
    }

    int sum=pahla + dosra + carry;
      int  last_digit= sum % 10;
     carry = sum / 10;
 

   ans.push_back(last_digit + '0');
   solve(first,second, i-1,j-1, carry,ans);




}



int main(){

    string first="1";
    string second="9";

    string ans="";

        solve(first , second , first.size()-1 , second.size()-1 , 0 , ans);

    reverse(ans.begin(), ans.end());

    cout<<"Sum is "<< ans<<endl;

    return 0;



}