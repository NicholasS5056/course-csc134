#include <iostream>
#include <limits>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Nicholas Sheehan
11/9/26

Lost Treasure : Title
*/

// Function Prototypes
void main_menu();
void choice_island();
void choice_cave();
void choice_treasure();
void choice_go_home();

int main() {
    cout << "The Lost Treasure" << endl;
    cout << "A Fantasy Adventure" << endl;

    main_menu();

    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu() {
    int choice = 0;

    while (choice != 4) {
        cout << endl;
        cout << "You discover an old treasure map." << endl;
        cout << "It leads to a mysterious island." << endl;
        cout << "What would you like to do?" << endl;
        cout << "1. Explore the island" << endl;
        cout << "2. Search the ancient cave" << endl;
        cout << "3. Return home" << endl;
        cout << "4. Quit" << endl;
        cout << "Choose: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a number." << endl;
            continue;
        }

        if (choice == 1) {
            choice_island();
        } else if (choice == 2) {
            choice_cave();
        } else if (choice == 3) {
            choice_go_home();
        } else if (choice == 4) {
            cout << "You decide to end your adventure." << endl;
        } else {
            cout << "That's not a valid choice. Try again." << endl;
        }
    }
}

// FUNCTION DEFINITIONS

void choice_island() {
    int choice;

    cout << endl;
    cout << "You arrive at a mysterious island." << endl;
    cout << "You see an ancient cave and a beach nearby." << endl;
    cout << "What do you do?" << endl;
    cout << "1. Explore the cave" << endl;
    cout << "2. Search the beach" << endl;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        choice_cave();
    } else if (choice == 2) {
        cout << "You search the beach and find an old coin." << endl;
        cout << "It has the same symbol as your treasure map!" << endl;
    } else {
        cout << "That's not a valid choice." << endl;
    }
}

void choice_cave() {
    int choice;

    cout << endl;
    cout << "You enter the dark ancient cave." << endl;
    cout << "Deep inside, you discover a treasure chest." << endl;
    cout << "What do you do?" << endl;
    cout << "1. Open the chest" << endl;
    cout << "2. Leave the cave" << endl;
    cout << "Choose: ";
    cin >> choice;

    if (choice == 1) {
        choice_treasure();
    } else if (choice == 2) {
        cout << "You decide to leave the cave and return outside." << endl;
    } else {
        cout << "That's not a valid choice." << endl;
    }
}

void choice_treasure() {
    cout << endl;
    cout << "You open the treasure chest!" << endl;
    cout << "Inside you find gold, jewels, and an ancient crown." << endl;
    cout << "You have discovered the Lost Treasure!" << endl;
    cout << "Congratulations, adventurer!" << endl;
}

void choice_go_home() {
    cout << endl;
    cout << "You decide the adventure is too dangerous." << endl;
    cout << "You return home safely." << endl;
    cout << "Maybe another day you will search for the treasure." << endl;
}