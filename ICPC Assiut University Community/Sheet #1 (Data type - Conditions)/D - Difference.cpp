#include <bits/stdc++.h>
using namespace std;
#define ll_a long long
#define sort_Vector(v) sort(v.begin(),v.end())
#define sort_Array(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<"Difference = "<<((a*b)-(c*d));
    return 0;
}
