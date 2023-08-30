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
    string x,a="";cin>>x;
    bool test=true;
    for(int i=0,j=x.length()-1;i<x.length();i++,j--){
        if(x[i]!=x[j]){
            test=false;
        }
        a+=x[j];
    }
    int n;
    stringstream a1;
    a1<<a;
    a1>>n;
    cout<<n<<endl;
    if(test){
        cout<<"YES";
    }else cout<<"NO";

    return 0;
}
