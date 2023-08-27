#include <bits/stdc++.h>
using namespace std;
#define ll_a long long
#define sort_Vector(v) sort(v.begin(),v.end())
#define sort_Array(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast
    int a,b;
    char s;
    cin>>a>>s>>b;
    switch(s){
        case '=':if(a==b){cout<<"Right";}else cout<<"Wrong";break;
        case '>':if(a>b){cout<<"Right";}else cout<<"Wrong";break;
        case '<':if(a<b){cout<<"Right";}else cout<<"Wrong";break;
    }


    return 0;
}
