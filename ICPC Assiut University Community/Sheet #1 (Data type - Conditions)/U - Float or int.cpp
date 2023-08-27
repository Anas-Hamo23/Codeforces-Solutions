#include <bits/stdc++.h>
using namespace std;
#define ll_a long long
#define sort_Vector(v) sort(v.begin(),v.end())
#define sort_Array(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast
    double n;cin>>n;
    int x=int(n);
    if(n==x){
        cout<<"int "<<n;
    }else cout<<"float "<<int(n)<<" "<<n-int(n);

    return 0;
}
