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
    int n;cin>>n;
    int x=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
            cout<<x<<" ";
            x++;
        }x++;
        cout<<"PUM"<<endl;
    }

    return 0;
}
