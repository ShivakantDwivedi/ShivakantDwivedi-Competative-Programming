/*

NOTE esme ye pta krna hai ki stairs ke top pe pahuchne me kitni stairs lag rhi hai 

Sample Input 1 :
2
2
3
Sample Output 1 :
2
3
Explanation Of Sample Input 1 :
In the first test case, there are only two ways to climb the stairs, i.e. {1,1} and {2}.

In the second test case, there are three ways to climb the stairs i.e. {1,1,1} , {1,2} and {2,1}.
Sample Input 2 :
2
4
5
Sample Output 2 :
5
8
Explanation Of Sample Input 2 :
In the first test case, there are five ways to climb the stairs i.e. {1,1,1,1} , {1,1,2} , {2,1,1} , {1,2,1} , {2,2}.

In the second test case, there are eight ways to climb the stairs i.e. {1,1,1,1,1} , {1,1,1,2} , {1,1,2,1}, {1,2,1,1}, {2,1,1},{2,2,1},{2,1,2} and {2,2,1}.


*/



#include <iostream>
using namespace std;

int count_stairs(int n)
{
    // base condition
    if(n<0) // agr aadmi basement me ho ga to vo ek bhi stairs nhi chadh paye ga esi liye return 0 hua hai
    return 0;
    if(n==0) // agr aadmi ground floor pe hoga to jo vahi pe koodh ke khada ho jai ga esi liye return 1 hua hai
    return 1;

    else
    {
        return count_stairs(n-1)+count_stairs(n-2);
    }
}


int main(){
    cout<<"Enter the number of stairs"<<endl;
    int n;
    cin>>n;
    cout<<"No.ofStairs are"<<count_stairs(n)<<endl;
    return 0;

}
