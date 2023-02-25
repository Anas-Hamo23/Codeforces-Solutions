//github : Anas-Hamo23
#include<iostream>
#include<string>
using namespace std;
int main(){ 
string a;
cin >> a;
if(a[0]>96)
a[0]-=32;
cout<<a;
return 0;
}