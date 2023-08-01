#include <bits/stdc++.h>
using namespace std;
#define ll_a long long
#define sort_Vector(v) sort(v.begin(),v.end())
#define sort_Array(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast
    int anas;
    cin >> anas;
    while (anas--) {
        int b,c,h,ans=0;cin>>b>>c>>h;
        int mi=min(b-1,c+h);
        cout<<mi*2+1<<endl;
    }
    return 0;
}
