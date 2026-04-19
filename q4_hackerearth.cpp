#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        sort(A.begin(), A.end(), greater<int>());
        unordered_set<int> alex, bob;
        int asum = 0, bsum = 0;
        bool turn = true; // true = Alex
        for (int i = 0; i < N; i++) {
            if (turn) {
                if (alex.find(A[i]) == alex.end()) {
                    alex.insert(A[i]);
                    asum += A[i];
                    turn = false; // switch to Bob
                }
            } else {
                if (bob.find(A[i]) == bob.end()) {
                    bob.insert(A[i]);
                    bsum += A[i];
                    turn = true; // switch to Alex
                }
            }
        }
        if (asum > bsum)
            cout << "Alex\n";
        else
            cout << "Bob\n";
    }
    return 0;
}