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
        int n;cin>>n;
        int count=0,cnt=0;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(a<=10){
                if(b>=count){
                    count=b;
                    cnt=i+1;
                }
            }
        }cout<<cnt<<endl;
    }
    return 0;
}
