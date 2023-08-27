#include <bits/stdc++.h>
using namespace std;
#define ll_a long long
#define sort_Vector(v) sort(v.begin(),v.end())
#define sort_Array(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast
    ll_a l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if((l2>r1&&r2>r1)||(l2<l1&&r2<l1)){
        cout<<-1;
    }else {
        int x,y;
        x=max(l1,l2);
        y=min(r1,r2);
        cout<<x<<" "<<y;
    }


    return 0;
}
