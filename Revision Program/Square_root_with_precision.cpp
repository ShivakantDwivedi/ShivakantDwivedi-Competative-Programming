#include <iostream>
using namespace std;

  long long int  sqr_root(int x)
  {
    int start = 0;
    int end = x;
    int mid  = start + ( end -  start)/2;
    int ans = -1;
    while(start<=end)
    {
        long long int square = (mid * mid);

        if(square == x)
        return mid;

        if  ( square > x)
        {
            end  =  mid - 1;
        }

        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid  = start + ( end -  start)/2;
    }
    return ans;
  }

    double precision(int n , int precision , int temp )
    {
        int factor = 1;
        int ans =  temp;      
        for (int i = 1 ; i  <= precision; i++)
        {
                factor = factor / 10;
                for(int j  =  ans ; j * j <= n ; j = j +  factor)
                {
                    ans =  j ;
                }
        }
        return ans ;
    }


int main(){
    long long int  n;
    cout<<"Enter  the  number whose Square  root is  find"<<endl;
    cin>>n;
    int temp = sqr_root(n);
    precision(n,3,temp);
    cout<< " The square root of a nnumber is "<<  precision(n,3,temp)<< endl;



    return 0;
}