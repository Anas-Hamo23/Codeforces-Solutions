//github : Anas-Hamo23
#include<iostream>
#include <string>
using namespace std;
int main() {
	string x;
	int counter{};
	int k=true;
	cin >> x;
	for (int i = 0; i < x.size(); i++) {
		for (int j = i + 1; j < x.size(); j++) {
			if (x[i] == x[j]) {
				k = false;
				break;
			}
		}
		if (k) {
			counter++;
		}
		k = true;
	}
	if (counter % 2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else cout << "IGNORE HIM!";
	return 0;
}