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
        int x,y;cin>>x>>y;
        int sum=0;
        for(int i=min(x,y)+1;i<max(x,y);i++){
            if(i%2!=0) sum+=i;
        }cout<<sum<<endl;
    }

    return 0;
}
