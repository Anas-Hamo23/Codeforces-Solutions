//github : Anas-Hamo23
#include<iostream>
using namespace std;
int main() {
	int x,count1 = 0, count2 = 0;
	string a;
	cin >> x;
	cin >> a;
	for (int i = 0; i < x; i++) {
		if (a[i] == 'A') {
			count1++;
		}
		else {
			count2++;
		}
	}
	if (count1 > count2) {
		cout << "Anton" << endl;
	}
	else if (count1 < count2) {
		cout << "Danik" << endl;
	}
	else {
		cout << "Friendship" << endl;
	}


	return 0;
}