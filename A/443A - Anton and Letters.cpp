#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
#include<map> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string n;
	getline(cin,n);
	vector<char>v;
	map<int, int>m;
        if(n.length()<=2){
cout<<0;
}else if(n.length()==3){
cout<<1;
}else{
	for (int i = 0; i < n.length(); i++) {
		if (m[n[i]] == 0) {
			v.push_back(n[i]);
		}m[n[i]]++;
	}cout << v.size()-4;}
	
	return 0;
}