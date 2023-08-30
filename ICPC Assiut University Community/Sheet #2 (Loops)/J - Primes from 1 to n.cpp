#include <bits/stdc++.h>
#include <typeinfo>
#include <type_traits>
using namespace std;
#define ll_a long long
#define ll_u unsigned long long
#define sort_Vector(v) sort(v.begin(),v.end())
#define sort_Array(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
int primes(int x){
    for(int i=2;i<=x;i++){
        if(x%i==0&&x!=i){
            return 0;
        }
    }return x;
}
int main() {
    fast
    int x;cin>>x;
    for(int i=2;i<=x;i++){
        if(primes(i)!=0){
            cout<<i<<" ";
        }
    }
    return 0;
}
