#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> cnt(2, 0);

    for (int i = 0; i < s.size(); i++) {
        cnt[s[i] - '0']++;
    }

    int ans = min(cnt[0], cnt[1]) * 2;

    cout << ans << endl;
}
