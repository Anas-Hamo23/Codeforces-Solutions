#include <bits/stdc++.h>
using namespace std;
#define ll_a long long
#define sort_Vector(v) sort(v.begin(),v.end())
#define sort_Array(a,n) sort(a,a+n)
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main() {
    fast
    double x,y;
    cin>>x>>y;
    if(x==0&&y==0){
        cout<<"Origem";
    }else if(x==0){
        cout<<"Eixo Y";
    }else if(y==0){
        cout<<"Eixo X";
    }else if(x<0&&y<0){
        cout<<"Q3";
    }else if(x<0&&y>0){
        cout<<"Q2";
    }else if(x>0&&y>0){
        cout<<"Q1";
    }else if(x>0&&y<0){
        cout<<"Q4";
    }


    return 0;
}
