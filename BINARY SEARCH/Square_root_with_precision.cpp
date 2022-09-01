#include <iostream>
using namespace std;

long long int squr_root(int x)
{
    int start=0;
    int end =x;
    int mid =  start + (end - start)/2;
    int ans =-1;
    while (start<= end)
    {
       long long int  square =  mid *  mid;

         if(square == x)
         return mid;

        if(square > x)
        {
            end = mid -1;
        } 

        else 
        {
            ans=  mid;
            start = mid +1;
        }
        mid =  start + (end - start)/2;
    }
    return ans;
    
}

double  precision(int n, int precision,int temp)
{
    double factor=1;
    double ans = temp;
    for(int i=0;i<precision;i++)    // precison means etni baar etni baaar  usko factor  kaare ge
    {                                               
        factor=factor/10;

        for(double j= ans ; j*j<n ; j=j + factor)
        {
            ans=j;                 // j = j + factor ans me point waali add karna hai 
        }
    } 
    return ans;
}





int main(){ 
   long long int  n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int temp=squr_root(n);
    double ans1= precision(n,3,temp);
    cout<<"The square root precision is "<<ans1<<endl;

    return 0;
}