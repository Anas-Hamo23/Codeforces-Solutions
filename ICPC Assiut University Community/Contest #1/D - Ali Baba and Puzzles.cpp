#include <bits/stdc++.h>
using namespace std;
#define ll_a long long
#define ll_u unsigned long long
#define sort_Vector(v) sort(v.begin(),v.end())
#define sort_Array(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast
    ll_u a,b,c,d;cin>>a>>b>>c>>d;
    if(a+b*c==d){
        cout<<"YES";
    }else if(a*b+c==d){
        cout<<"YES";
    }else if(a+b-c==d){
        cout<<"YES";
    }else if(a-b+c==d){
        cout<<"YES";
    }else if(a-b*c==d){
        cout<<"YES";
    }else if(a*b-c==d){
        cout<<"YES";
    }else cout<<"NO";
    return 0;
}
