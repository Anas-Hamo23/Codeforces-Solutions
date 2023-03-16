//github : Anas-Hamo23
#include<iostream>
using namespace std;
int main()
{ 
    int max=0,n,s=0;
    cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
        s+=y[i]-x[i];
      if(max<s){
          max=s;
      }  
    }
    cout<<max;
return 0;
}