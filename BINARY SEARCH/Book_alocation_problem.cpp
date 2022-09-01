#include <iostream>
using namespace std;

bool ispartition(int arr[],int n,int mid,int m) // yahi main important hai
{ 
    int student=1;
    int pagecount=0;

    for(int i=0;i<n;i++)
    {
        if(pagecount+arr[i]<=mid )      // agr pagecount and arrayof i ki value chooti  
        {                              //  hai tb to accha hai pagecount me add krte jaana hai
             pagecount=pagecount+arr[i];
        }
        else
        {
            student++;          // agr choti nhi hai to dusre student me dekhna hai
           if(student > m || arr[i]>mid) // agr student ki value bhi given student se jada hai 
                                        // or agr array ki value bhi jada hai mid se to false return krna pade ga
           {
            return false;
           }
            pagecount=arr[i];   // nahi to pagecount me daal do or poora loop ke badd true return kr do
        }
    }
    return true;

}

int book_alocation(int arr[],int n,int m)
{
    int start=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int end=sum;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(ispartition(arr,4,mid,m))
        {
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
       mid=start+(end-start)/2; 
    }
    return ans;
}




int main(){
    int number[4]={10,20,30,40};
    int m=2;
   int ans1=book_alocation(number,4,m);
   cout<<ans1<<endl;
   return 0;
}