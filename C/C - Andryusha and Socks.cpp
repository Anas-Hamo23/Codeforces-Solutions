#include<bits/stdc++.h>
using namespace std; 
void prove(){
int n;
cin>>n; 
map <int,int> mp; 
int t,c=0,mx=0;
for(int i=0;i<2*n;i++){
    
  cin>>t; 
  if(mp.find(t)!=mp.end())
  mp.erase(t);
  else{
  mp[t]-=1;
  }
  if(mx<mp.size())
  mx=mp.size();
}

  cout<<mx<<endl;
}
int main() { 
  prove();
  return 0;
}