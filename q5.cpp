#include <bits/stdc++.h>
using namespace std;

class MovieTicket {
private:
    unordered_map<int, unordered_set<int>> userBookings;
    unordered_map<int, int> movieBookedCount;
    const int MAX_SEATS = 100;

public:

    bool BOOK(int X, int Y) {
        if (userBookings[X].count(Y) || movieBookedCount[Y] >= MAX_SEATS)
            return false;

        userBookings[X].insert(Y);
        movieBookedCount[Y]++;
        return true;
    }

    bool CANCEL(int X, int Y) {
        if (!userBookings[X].count(Y))
            return false;

        userBookings[X].erase(Y);
        movieBookedCount[Y]--;
        return true;
    }

    bool IS_BOOKED(int X, int Y) {
        return userBookings[X].count(Y) > 0;
    }

    int AVAILABLE_TICKETS(int Y) {
        return MAX_SEATS - movieBookedCount[Y];
    }
};

int main() {
    int Q;
    cin >> Q;

    MovieTicket mt;

    while (Q--) {
        string query;
        cin >> query;

        if (query == "BOOK") {
            int X, Y;
            cin >> X >> Y;
            cout << (mt.BOOK(X, Y) ? "true" : "false") << endl;

        } else if (query == "CANCEL") {
            int X, Y;
            cin >> X >> Y;
            cout << (mt.CANCEL(X, Y) ? "true" : "false") << endl;

        } else if (query == "IS_BOOKED") {
            int X, Y;
            cin >> X >> Y;
            cout << (mt.IS_BOOKED(X, Y) ? "true" : "false") << endl;

        } else if (query == "AVAILABLE_TICKETS") {
            int Y;
            cin >> Y;
            cout << mt.AVAILABLE_TICKETS(Y) << endl;
        }
    }

    return 0;
}