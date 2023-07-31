#include<iostream>
#include <cmath>
#include<vector>
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std ;
void myfun() {
ll n,m,k,H,conterA=0;
cin>>n>>m>>k>>H;
ll h[n];
for(int i=0;i<n;i++){
cin>>h[i];
ll c=0;
c=abs(H-h[i]);
for(int j=1;j<m;j++){
if(c==j*k){
conterA++;
}
}
}cout<<conterA<<endl;
}
int main()
{
ios::sync_with_stdio(NULL);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
myfun() ;
}

return 0;
}
