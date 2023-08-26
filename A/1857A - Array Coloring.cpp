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
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i<=(n/2)){
                sum1+=a[i];
            }else sum2+=a[i];
        }
        if(sum1%2==0&&sum2%2==0){
            cout<<"YES"<<endl;
        }else if(sum1%2!=0&&sum2%2!=0){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;

    }
    return 0;
}
