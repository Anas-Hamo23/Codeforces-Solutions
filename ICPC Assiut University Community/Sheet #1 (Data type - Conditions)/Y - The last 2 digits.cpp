#include <bits/stdc++.h>
using namespace std;
#define ll_a long long
#define ll_u unsigned long long
#define sort_Vector(v) sort(v.begin(),v.end())
#define sort_Array(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
    long long x=a*b*c*d;
    if(x%100<=9)cout<<0;
    cout<<x%100;
    return 0;
}
