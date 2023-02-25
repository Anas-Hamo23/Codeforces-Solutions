//github : Anas-Hamo23
#include<iostream>
using namespace std;
int main() {
	string v1, v2;
	cin >> v1 >> v2;
	for (int i = 0; i < v1.size(); i++) {
		int n1 = tolower(v1[i]);
		int n2 = tolower(v2[i]);
		if (n1 < n2) {
			cout << -1;
			return 0;
		}
		else if (n1 > n2) {
			cout << 1 << endl;
			return 0;
		}
	}
	cout << 0 << endl;
	return 0;
}