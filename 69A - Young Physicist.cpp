//github : Anas-Hamo23
#include<iostream>
#include<string>
using namespace std;
int main(){ 
int n;
cin >>n;
int a[n][3];
int x[3]={0};
for ( int i = 0 ; i< n ; i++)
{
    for ( int j = 0 ; j<3;j++)
    {
        cin >>a[i][j];
        x[j]= x[j] + a[i][j];
       // cout << x[j]<< "  ";
    }
}
for ( int i =0 ; i<3 ;i++)
{
    if (x[i]!=0)
    {
    cout << "NO";
    return 0;
    }
   // break;
}
cout << "YES";
return 0;
}