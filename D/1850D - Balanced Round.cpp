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
    while (anas--) {
        ll_a n,k;cin>>n>>k;
        vector<ll_a>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }sort_Vector(v);
        int count=1,countf=1;
        for(int i=1;i<n;i++){
            if(v[i]-v[i-1]>k){
                count=1;
            }else count++;
            countf = max(count,countf);
        }
        cout<< n - countf<<endl;
    }
    return 0;
}
