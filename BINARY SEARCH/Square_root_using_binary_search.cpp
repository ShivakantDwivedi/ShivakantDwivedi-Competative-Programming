#include <iostream>
using namespace std;
 long long int square(int x) // long long es liye liye bhi ki value int ki range se bahar ho to error na aaye
{
    int start=0;
    int end=x;
    int mid = start +  (end -  start) /2;
    int ans =-1;
    while(start <= end)
    {
        long long int square = mid * mid;

        if( square == x )
        return mid;

        if (square < x)  // gr  square root ki  value choti ho gi to mid ko ans ke andar store kara lle ge or start ko aage badha de ga
                            //  because square ke peeche wali value bhi answwer se choti hi ho gi
        {
            ans = mid;
            start = mid +1; 
        }
        else
        {
            end= mid -1;
        }
        mid = start + (end -  start)/2;
    }
    return ans;
}
int main()
{
    long long int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    square(n);
    cout<<"The square root of number"<<" "<< square(n)<< endl;
    return 0;
}

