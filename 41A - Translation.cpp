//github : Anas-Hamo23
#include<iostream>
using namespace std;
int main() {
	string s, t;
	cin >> s >> t;
	int a = 0, b = 0, x = t.length();
	for (int i = 1; i < x+1; i++) {
		if (s[i-1] == t[x - i]) {
			a++;
		}
		else {
			b++;
		}
	}
	if (b>0){
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
	}
	return 0;
}