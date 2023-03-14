#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<vector>
#include<map>
#include<bitset>
#include<set>
using namespace std;
void aaa(){
      int n;
		cin >> n;
		int x[n];
		set<int> a;
		for (int i = 0; i < n; i++)
		{
			cin >> x[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (a.find(x[i]) != a.end())
			{
				cout << "NO" << endl;
				return;
			}
			a.insert(x[i]);
		}
		cout << "YES" << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); 
	int anas; cin >> anas;
	while (anas--)
	{
		aaa();
	}
	return 0;
}