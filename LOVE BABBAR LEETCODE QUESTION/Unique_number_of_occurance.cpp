#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


 bool uniqueOccurrences(int arr[],int n) {
         vector<int>ans;
        sort(arr,arr+n);
        int i=0;
       while(i<n){
            int count=1;
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
                else{
                    break;
                }
            }
            ans.push_back(count);
            i=i+count;
        }
        int m=ans.size();
        sort(ans.begin(),ans.end());
        for(int i=0;i<m-1;i++)
        {
            if(ans[i]==ans[i+1])
            {
                  return false;
             }
        }
               return true;
        
    }

int main(){
    int number[10]={-3,0,1,-3,1,1,1,-3,10,0};
    cout<<uniqueOccurrences(number,10)<<endl;
    return 0;
}