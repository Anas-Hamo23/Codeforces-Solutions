//github : Anas-Hamo23
#include<iostream>
using namespace std;
int main()
{ int a,b;
cin >> a >> b;
for(int i=1;i<=b;i++){
    if(a%10!=0){
        a--;
    }
    else
    a/=10;
}
cout<<a;
return 0;
}