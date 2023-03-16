//github : Anas-Hamo23
#include<iostream>
#include<string>
using namespace std;
int main()
{ int a,b;
cin>>a>>b;
    string n;
    cin>>n;
     for(int i=0;i<b;i++)
    for(int j=0;j<a;j++){
        if(n[j]=='B'&&n[j+1]=='G'){
            swap(n[j],n[j+1]);
         j++;
        
        }
    }
     cout<<n;
return 0;
}