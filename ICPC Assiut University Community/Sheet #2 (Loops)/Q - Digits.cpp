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
    int test;cin>>test;
    while(test--){
        string n;cin>>n;
        for(int i=n.length()-1;i>=0;i--){
            cout<<n[i]<<" ";
        }cout<<endl;
    }

    return 0;
}
