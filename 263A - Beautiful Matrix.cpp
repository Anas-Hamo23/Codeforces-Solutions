//github : Anas-Hamo23
#include<iostream>
#include<string>
using namespace std;
int main(){ 
    int x,z;
int arr[5][5];

for(int i=0;i<5;i++){
for(int j=0;j<5;j++)
{
cin>>arr[i][j];
if (arr[i][j]==1)
{
    x = i;
    z=j;
}
}}
if(x<2)
x=2-x;
else
x=x-2;
if(z<2)
z=2-z;
else
z=z-2;
cout<<z+x;
return 0;
}