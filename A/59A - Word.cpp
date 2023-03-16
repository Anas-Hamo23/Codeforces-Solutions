//github : Anas-Hamo23
#include<iostream>
using namespace std;
int main() {
	string x;
	int sm = 0, ca = 0;
	cin >> x;
	for (int i = 0; i < x.size(); i++) {
		if (x[i] >= 97 && x[i] <= 122) {
			sm++;
		}
		else {
			ca++;
		}
	}
	char res;
	if (ca > sm) {
		for (int i = 0; i < x.size(); i++) {
			res = toupper(x[i]);
			cout << res;
		}
	}
	else {
		for (int i = 0; i < x.size(); i++) {
			res = tolower(x[i]);
			cout << res;
		}
	}
	return 0;
}