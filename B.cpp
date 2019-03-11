#include <iostream>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    int counter = 0;
    int ans;
    for (int i = min(a, b); i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            counter++;
            ans = i;
        }
        if (counter == k) break;
    }

    cout << ans << endl;
}
