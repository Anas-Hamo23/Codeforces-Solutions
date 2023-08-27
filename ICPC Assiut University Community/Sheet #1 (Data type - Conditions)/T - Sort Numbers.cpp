#include <bits/stdc++.h>
using namespace std;
#define ll_a long long
#define sort_Vector(v) sort(v.begin(),v.end())
#define sort_Array(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast
    ll_a a[3],b[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+3);
    cout<<a[0]<<"\n"<<a[1]<<"\n"<<a[2]<<"\n\n"<<b[0]<<"\n"<<b[1]<<"\n"<<b[2];



    return 0;
}
