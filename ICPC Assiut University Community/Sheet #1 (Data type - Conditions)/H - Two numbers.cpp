#include <bits/stdc++.h>
using namespace std;
#define ll_a long long
#define sort_Vector(v) sort(v.begin(),v.end())
#define sort_Array(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast
    long double n,m;
    cin>>n>>m;
    cout<<"floor "<<n<<" / "<<m<<" = "<<floor(n/m)<<endl;
    cout<<"ceil "<<n<<" / "<<m<<" = "<<ceil(n/m)<<endl;
    cout<<"round "<<n<<" / "<<m<<" = "<<round(n/m);
    return 0;
}
