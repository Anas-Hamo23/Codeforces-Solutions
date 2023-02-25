#include<iostream>
using namespace std; 
int main() {
	string n, m, z="";
	cin >> n >> m;
	for (int i = 0; i < n.length(); i++) {
		if (n[i] == m[i]) {
			z += "0";
		}
		else {
			z += "1";
		}
	}cout << z << endl;
	return 0;
}