//github : Anas-Hamo23
#include<iostream>
using namespace std;
int main(){ 
int k,n,c=0;
cin>>k>>n;
int x[k];
for(int i=0;i<k;i++){
    cin>>x[i];
}
for(int i=0;i<k;i++){
 if(x[i]!=0&&x[i]>=x[n-1])
 c+=1;
}
cout<<c;
return 0;
}