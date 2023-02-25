//github : Anas-Hamo23
#include<iostream>
#include<string>
using namespace std;
int main(){ 
long int k,n,w,s=0;
cin>>k>>n>>w;
for(int i=1;i<=w;i++){
    s+=k*i;
}
if (s-n<0)
cout<<0;
else
cout<<s-n;
return 0;
}