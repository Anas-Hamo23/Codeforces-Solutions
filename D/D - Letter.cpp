//github : Anas-Hamo23
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    unordered_map<char, int> charCount;
    for (char c : s1) {
        charCount[c]++;
    }

    bool canCompose = true;
    for (char c : s2) {
        if (c != ' ') {
            if (charCount[c] == 0) {
                canCompose = false;
                break;
            } else {
                charCount[c]--;
            }
        }
    }

    cout << (canCompose ? "YES" : "NO");

    return 0;
}
