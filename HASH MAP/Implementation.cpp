#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;
int main(){

unordered_map<string,int>m; // create an unordered map of name m

// insert the keys and values in unordered map m

pair<string ,int> p=make_pair("babbar",3);

m.insert(p);

// 2
pair<string,int> pair2("love",5);
m.insert(pair2);

// 3
m["mera"]=1;
m["mera"]=2;

// search
cout<<m["mera"]<<endl;

cout<<m.at("babbar")<<endl;

// agr ham es tarike se kare ge to ek entry ban jaati hai ==0 ki
cout<<m["unknown"]<<endl; 

// but yaha pe entry nhi banti hai yaha pe sirph search karta hai
cout<<m.at("unknown")<<endl;


// ye map ko traverse karne ka ek tareeeka hai
/*
for ( auto i :m)
{
    cout<<i.first<<" "<<i.second<<endl;
}
*/



// size
cout<<"size of map"<<m.size()<<endl;

//  to check prticular key is present or not
cout<<m.count("bro")<<endl; // ye bollean value de ga

cout<<m.count("love")<<endl; // ye bollean value de ga


// ye function kaam aata hai erase  karne me map ke andar se
 // m.erase("love");
cout<<m.size()<<endl;

// iterartor 
// ham unorderd map liye hai esi liye sorted order me print nhi ho rha hai


unordered_map <string,int> :: iterator it=m.begin();
while(it!=m.end())
{
    cout<<it->first<<" "<<it->second<<endl;
    it++;
}



// ab ye sorted order me aaye ga
/*
map <string,int> :: iterator it=m.begin();
while(it!=m.end())
{
    cout<<it->first<<" "<<it->second<<endl;
    it++;
}
*/


}