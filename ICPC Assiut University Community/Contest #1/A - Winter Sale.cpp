#include <bits/stdc++.h>
using namespace std;
#define ll_a long long
#define ll_u unsigned long long
#define sort_Vector(v) sort(v.begin(),v.end())
#define sort_Array(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast
    double x,p;cin>>x>>p;
    int y=100-x;
    double z=(p*100)/y;
    cout<<fixed<<setprecision(2)<<z;
    return 0;
}
