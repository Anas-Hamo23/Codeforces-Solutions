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
    int n;cin>>n;ll_a maxe=0;
    for(int i=0;i<n;i++){
        ll_a x;cin>>x;
        if(maxe<x){
            maxe=x;
        }
    }cout<<maxe;

    return 0;
}
