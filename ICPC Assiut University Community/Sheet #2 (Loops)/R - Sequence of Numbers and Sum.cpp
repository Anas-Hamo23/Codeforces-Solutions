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
    for(;;){
        int n,m;cin>>n>>m;
        if(n<=0||m<=0){
            return 0;
        }
        int x=min(n,m),y=0;
        for(int i=min(n,m);i<=max(n,m);i++){
            y+=i;
            cout<<i<<" ";
        }cout<<"sum ="<<y<<endl;
    }

    return 0;
}
