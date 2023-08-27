#include <bits/stdc++.h>
using namespace std;
#define ll_a long long
#define sort_Vector(v) sort(v.begin(),v.end())
#define sort_Array(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast
    char a;
    cin>>a;
    if(a>=97){
        cout<<char(a-32);
    }else {
        cout<<char(a+32);
    }
    return 0;
}
