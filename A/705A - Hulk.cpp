#include<iostream>
using namespace std; 
int main() {
	int x;
	string  n="",m="that ", z="it",y="I hate ",k="I love ";
	cin >> x;
	if (x == 1) {
		cout << "I hate" << " " << z;
	}
	else {
		for (int i = 0; i < x; i++) {
			if (i + 1 < x) {
				if (i % 2 == 0) {
					n += y + m;
				}
				else {
					n += k + m;
				}
			}else if (i % 2 == 0) {
				n += y + z;
			}
			else {
				n += k + z;
			}	
		}
	}cout << n;
	return 0;
}