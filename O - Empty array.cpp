#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,x[100000],maxe=0;
	cin >> n;
	vector<int>v;
	map<int, int>m;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		if (m[x[i]]==0) {
			v.push_back(x[i]);
		}
		m[x[i]]++;
		maxe = max(maxe, m[x[i]]);
	} 
	sort(v.begin(), v.end());
	while (maxe--)
	{
		for (int i = 0; i < v.size(); i++) {
			if (m[v[i]] > 0) {
				cout << v[i] << " ";
				m[v[i]]--;
			}
		}
		cout << endl;
	}
	return 0;
}