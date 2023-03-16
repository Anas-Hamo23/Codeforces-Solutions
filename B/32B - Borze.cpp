#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string x, n = "";
	cin >> x;
	for (int i = 0; i < x.length(); i++) {
		if (x[i] == '.') {
			n += "0";
		}
		else if (x[i] == '-' && x[i + 1] == '.') {
			n += "1"; i++;
		}
		else if (x[i] == '-' && x[i + 1] == '-') {
			n += "2"; i++;
		}
	}cout << n << endl;
	return 0;
}