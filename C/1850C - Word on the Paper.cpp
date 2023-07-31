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
        string x="";
        //getline(cin,n);
        char n[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>n[i][j];
                if(n[i][j]!='.'){
                    x+=n[i][j];
                }
            }
        }cout<<x<<endl;
    }
    return 0;
}
