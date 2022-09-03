#include  <iostream>
#include  <vector>
using namespace std;


bool check(vector<int>brr)
{
    int m=brr.size();
    int count=0;
    for(int i=0;i<m-1;i++)
    {
        if(brr[i]>brr[i+1])
        {
            count++;
        }
        
    }
    if(brr[m-1]>brr[0])
    {
        count++;
    }
   return count<=1;  // chahae asay likhe chhahe if(count<=1) matlab yek hi hai 
                            //  return true;        false bhi return kare ga.
                              //     else           
                            // return false;
}


int main(){
    vector<int>arr;
    int size;
    cout<<"Enter the size of element"<<endl;
    cin>>size;
    cout<<"Enter the element in the vector"<<endl;
    int m;
    for(int i=0;i<size;i++)
    {
        cin>>m;
        arr.push_back(m);
    }
    cout<<"Answer is"<<endl;
   cout<<check(arr);
   return 0;


}