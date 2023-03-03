#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int anas,g=0;
	string n,team;
	cin >> anas;
	while (anas--)
	{
		if (g != 0) {
			cin >> team;
			if (team == n) {
				g++;
			}
			else {
				g--;
			}
		}
		else {
			cin >> n;
			g = 1;
		}
		
	}cout << n << endl;
	return 0;
}