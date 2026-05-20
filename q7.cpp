#include<bits/stdc++.h>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    // Check if name is empty
    if (name.empty()) {
        cout << "Name not entered. Please run again and enter your name." << endl;
        return 0; // Exit program
    }

    // Roast templates with placeholder
    vector<string> roasts = {
        "Hey " + name + ", even autocorrect gives up on you.",
        name + ", you bring people together... in confusion.",
        "If laziness was an Olympic sport, " + name + " would win gold without showing up.",
        name + ", you have something in common with clouds,when you disappear, it/’s a beautiful day.",
        "I/’d explain it to you, " + name + ", but I left my crayons at home."
    };

    // Seed random number generator
    srand(time(0));
    int choice = rand() % roasts.size();

    cout << "\nRoast of the day \n";
    cout << roasts[choice] << endl;

    return 0;
}
