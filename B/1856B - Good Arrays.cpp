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
        ll_a cnt=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(a[i]==1){
                cnt++;
            }
        }
        if(n>1&&sum>=(cnt+n)){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }
    return 0;
}
