#include <iostream>
#include <bitset>
using namespace std;
bitset<300001> a;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        a.reset();
        while (q--) {
            int x;
            cin >> x;
            for (int i = x; i <= n; i += x) {
                a.set(i);
            }
        }
        for (int i = 1; i <= n; i++) {
            cout << a[i];
            if (i != n) {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}