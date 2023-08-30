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
    int n;cin>>n;
    int even=0,odd=0,pos=0,neg=0,x;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x%2==0){
            even++;
        }else{
            odd++;
        }
        if(x>0){
            pos++;
        }else if(x<0){
            neg++;
        }
    }cout<<"Even: "<<even<<"\n"<<"Odd: "<<odd<<"\n"<<"Positive: "<<pos<<"\n"<<"Negative: "<<neg;



    return 0;
}
