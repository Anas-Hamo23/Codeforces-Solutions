#include <bits/stdc++.h>
using namespace std;
#define ll_a long long
#define sort_v(v) sort(v.begin(),v.end())
#define sort_a(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast
    int anas;
    cin >> anas;
    while (anas--) {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b)>=10||(a+c)>=10||(c+b)>=10){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }
    return 0;
}
