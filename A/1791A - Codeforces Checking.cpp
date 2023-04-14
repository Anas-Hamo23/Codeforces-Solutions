#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
using namespace std; 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int anas;
	cin >> anas;
	while (anas--) {
		string a; cin >> a;
		bool x = false;
		for (int i = 0; i < a.length(); i++) {
			if (a[i]=='c'||a[i]=='o'||a[i]=='d'|| a[i] == 'e' || a[i] == 'f' || a[i] == 'r'||a[i]=='s') {
				x = true;
				break;
			}
		}
		if (x) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		 
	}
	return 0;
}
