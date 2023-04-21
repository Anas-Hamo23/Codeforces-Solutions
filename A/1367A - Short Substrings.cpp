#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
using namespace std; 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int anas; cin >> anas;
	while (anas--) {
		string b;
		cin >> b;
		string a = b.substr(0, 2);
		for (int i = 3; i < b.size(); i += 2) {
			a += b[i];
		}
		cout << a << endl;
	}
	return 0;
}
