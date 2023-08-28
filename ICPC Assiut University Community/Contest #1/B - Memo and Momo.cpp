#include <bits/stdc++.h>
using namespace std;
#define ll_a long long
#define ll_u unsigned long long
#define sort_Vector(v) sort(v.begin(),v.end())
#define sort_Array(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast
    ll_u a,b,k;cin>>a>>b>>k;
    if(a%k==0&&b%k==0){
        cout<<"Both";
    }else if(a%k==0&&b%k!=0){
        cout<<"Memo";
    }else if(b%k==0&&a%k!=0){
        cout<<"Momo";
    }else{
        cout<<"No One";
    }
    return 0;
}
