//github : Anas-Hamo23
#include<iostream>
#include<string>
using namespace std;
int main(){ 
string a,q,o;
cin >> a;
q="AUIEOYauieoy";
for (int i = 0 ; i<a.length();i++)
{
    if(a[i]<96)
    a[i]+=32;
    for (int y = 0 ; y<q.length();y++)
    if (a[i]==q[y]){
        a[i]=' ';
    }
    if(a[i]!=' '){
        o+=".";
    o+=a[i];
    }
}
cout<<o;
return 0;
}