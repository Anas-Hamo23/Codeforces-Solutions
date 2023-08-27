#include <bits/stdc++.h>
using namespace std;
#define ll_a long long
#define sort_Vector(v) sort(v.begin(),v.end())
#define sort_Array(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast
    long long n;
    cin>>n;
    int years=n/365;
    int x=n-(365*years);
    int months=x/30;
    int day=x-(30*months);
    cout<<years<<" years"<<endl;
    cout<<months<<" months"<<endl;
    cout<<day<<" days";



    return 0;
}
