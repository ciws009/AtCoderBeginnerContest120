#include <iostream>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    int counter = 0;
    for (int i = min(a, b); i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            counter++;
            if (counter == k) {
                cout << i << endl;
                return 0;
            }
        }
    }
}
