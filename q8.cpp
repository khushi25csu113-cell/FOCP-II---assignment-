#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    cout << "Enter student name: ";
    getline(cin, name);

    // Check if name is empty
    if (name.empty()) {
        cout << "Name not entered. Please run again and enter a name." << endl;
        return 0;
    }

    // Excuse templates
    vector<string> excuses = {
        name + " said the dog ate the homework.",
        name + " accidentally recycled the homework while cleaning.",
        name + " was abducted by aliens who wanted to study the homework.",
        "The homework caught fire when " + name + " tried to cook instant noodles.",
        name + " left the homework on the bus—again.",
        "A sudden power cut erased " + name + "'s entire progress.",
        name + " claims the homework file turned into a meme.",
        "The printer betrayed " + name + " at the last moment.",
        name + " was too busy saving the world in a video game.",
        "A bird flew away with " + name + "'s homework notes.",
        name + " spilled coffee all over the assignment.",
        "The homework was done, but " + name + " forgot to save it.",
        name + " says the homework is still buffering.",
        "The homework vanished into thin air—" + name + " swears it was there!",
        name + " gave the homework to a friend who never returned it."
    };

    // Random selection
    srand(time(0));
    int choice = rand() % excuses.size();

    cout << "\nHomework Excuse of the Day \n";
    cout << excuses[choice] << endl;

    return 0;
}
