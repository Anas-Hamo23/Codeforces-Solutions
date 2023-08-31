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
    ll_a n,k;cin>>n>>k;
    ll_a a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int curr=numeric_limits<int>::max();
    for(int i=0;i<n;i++){
        if(a[i]<curr){
            curr=a[i];
        }
        if((i+1)%k==0||i==n-1){
            cout<<curr<<" ";
            curr=numeric_limits<int>::max();
        }
    }


    return 0;
}
