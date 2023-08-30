#include <bits/stdc++.h>
#include <typeinfo>
#include <type_traits>
using namespace std;
#define ll_a long long
#define ll_u unsigned long long
#define sort_Vector(v) sort(v.begin(),v.end())
#define sort_Array(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast
    int a,b;cin>>a>>b;
    int g;
    for(int i=1;i<=min(a,b);i++){
       if(a%i==0&&b%i==0){
            g=i;
       }
    }cout<<g;
    return 0;
}
