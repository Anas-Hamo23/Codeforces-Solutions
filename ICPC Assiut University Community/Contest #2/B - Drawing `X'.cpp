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
    int n;cin>>n;int x=1,y=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j&&j==(n/2)+1){
                cout<<"X";
            }else if(x==j){
                cout<<"\\";
            }else if(i+j==n+1){
                cout<<"/";
            }else cout<<"*";
        }x++;y--;
        cout<<endl;
    }


    return 0;
}
