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
    int n;cin>>n;
    int x=0,y=1,fibo=0;
    if(n>=1){
        cout<<0<<" ";
    }
    if(n>=2){
        cout<<1<<" ";
    }
    for(int i=3;i<=n;i++){
        fibo=x+y;
        x=y;y=fibo;
        cout<<fibo<<" ";
    }

    return 0;
}
