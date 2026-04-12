
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string bulbs;
    cin >> bulbs;

    for (int l = 1; l <= n; l++) {
        int ops = 0;

        for (int i = 0; i < n; ) {
            if (bulbs[i] == '1') {
                ops++;
                i += l; // turn off l bulbs
            } else {
                i++;
            }
        }

        if (ops <= k) {
            cout << l;
            return 0;
        }
    }

    return 0;
}