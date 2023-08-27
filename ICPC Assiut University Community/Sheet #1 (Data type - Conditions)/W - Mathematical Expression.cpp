#include <bits/stdc++.h>
using namespace std;
#define ll_a long long
#define sort_Vector(v) sort(v.begin(),v.end())
#define sort_Array(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast
    ll_a a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    switch(s){
        case '+':if((a+b)==c){cout<<"Yes";}else cout<<a+b;break;
        case '-':if((a-b)==c){cout<<"Yes";}else cout<<a-b;break;
        case '*':if((a*b)==c){cout<<"Yes";}else cout<<a*b;break;
    }


    return 0;
}
