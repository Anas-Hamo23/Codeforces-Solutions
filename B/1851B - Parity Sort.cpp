#include<iostream>
#include <cmath>
#include<vector>
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));


using namespace std;
void myfun() {
ll n,m,i,j,k;
cin>>n;
vector<ll>v(n);
for( i=0;i<n;i++)cin>>v[i];


vector<ll>odd;vector<ll>even;vector<ll>new_v;
for( i=0;i<n;i++)
{
if(v[i]&1){
odd.push_back(v[i]);
}else even.push_back(v[i]);

}
sort(even.begin(),even.end());
sort(odd.begin(),odd.end());
ll odd_c=0,even_c=0;
for( i=0;i<n;i++){
if(v[i]&1){
new_v.push_back(odd[odd_c]);
odd_c++;
}else{
new_v.push_back(even[even_c]);
even_c++;
}
}
if(is_sorted(new_v.begin(),new_v.end())){
cout<<"YES"<<"\n";
}else cout<<"NO"<<"\n";


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
