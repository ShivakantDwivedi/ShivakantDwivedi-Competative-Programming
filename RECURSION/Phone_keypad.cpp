/*


Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.


 

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
Example 2:

Input: digits = ""
Output: []
Example 3:

Input: digits = "2"
Output: ["a","b","c"]
*/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void solve(string n, vector<string>&ans,int index,string output,string mapping[])
{
    //  base condition
    if(index>=n.length())
    {   
        ans.push_back(output);
        return ;
    }

    else
    {
        int number = n[index] - '0';
        string value = mapping[number];

        for (int i=0;i<value.length();i++)
        {
            output.push_back(value[i]);
            solve(n,ans,index+1,output,mapping);
            output.pop_back();
        }
    }
}

vector<string>phone_keypad(string n)
{
    vector<string>ans;
    int index=0;
    string output="";
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(n,ans,index,output,mapping);

}


using namespace std;
int main(){
    cout<<"Enter the digit"<<endl;
    string n;
    cin>>n;
    phone_keypad(n);
    return 0;

}