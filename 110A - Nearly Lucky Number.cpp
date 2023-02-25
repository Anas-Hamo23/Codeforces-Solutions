//github : Anas-Hamo23
#include<iostream>
#include<string>
using namespace std;
int main()
{ int c=0;
    string n;
    cin>>n;
    for(int i=0;i<n.size();i++){
        if((n[i]=='4')||(n[i]=='7')){
++c;
          }
        }
        if(c==4||c==7)
    cout<<"YES";
    else
    cout<<"NO";
return 0;
}