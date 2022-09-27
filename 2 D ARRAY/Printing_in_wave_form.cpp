/*input -> 1 2 3
           4 5 6
           7 8 9

output    1 4 7 8 5 2 3 6 9



*/
#include <iostream>
using namespace std;

void wave_form(int arr[][3],int row,int col)
{
    for(int i=0; i<col ; i++) // ye coloumn ke liye hai
    {
        if(i%2==0) //  mtlabh ki even me top se bottom ki or jaana haii
        {
            for(int j=0;j<row;j++) // ye row ke liye hai
            {
                cout<<arr[j][i];
            }
        }
        else //  mtlabh ki odd me bottom se top ki or jaana haii
        { 
            for(int j=row-1;j>=0;j--) // ye row ke liye hai
            {
                cout<<arr[j][i];
            }
        }
    }
}

int main(){
    int arr[3][3];
    cout<<"Enter the input in array"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Printing in an array"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    wave_form(arr,3,3);

    return 0;

}
