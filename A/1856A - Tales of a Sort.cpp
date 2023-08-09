#include <bits/stdc++.h>
using namespace std;
#define ll_a long long
#define sort_Vector(v) sort(v.begin(),v.end())
#define sort_Array(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast
    int anas;
    cin >> anas;
    while(anas--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]>a[i+1]&&i+1<n){
                cnt=max(cnt,a[i]);
            }
        }cout<<cnt<<endl;
    }
    return 0;
}
