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
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
            if(i<=j)cout<<"*";
       }cout<<endl;
    }

    return 0;
}
