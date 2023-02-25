//github : Anas-Hamo23
#include<iostream>
#include<string>
using namespace std;
int main(){ 
string r;
int n,c=0;
cin>>n;
cin>>r;
for(int i=1;i<n;i++){
   if(r[i-1]==r[i])
   c++;
}
cout<<c;
return 0;
}