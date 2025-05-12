#include <iostream>
using namespace std;

// Function Prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_knock_door();
void choice_break_door();

int main() {
    cout << "M5LAB1 - Choose Your Own Adventure" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu() {
    cout << "Main Menu" << endl;
    cout << "You're in front of a spooky old house..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it, and go home" << endl;
    cout << "4. Knock on front door" << endl;
    cout << "5. Try breaking in" << endl;
    cout << "6. [Quit]" << endl;
    cout << "Choose: ";

    int choice;
    cin >> choice;

    switch (choice) {
        case 1: choice_front_door(); break;
        case 2: choice_back_door(); break;
        case 3: choice_go_home(); break;
        case 4: choice_knock_door(); break;
        case 5: choice_break_door(); break;
        case 6: cout << "Ok, quitting game" << endl; return;
        default: cout << "Invalid choice, try again." << endl; main_menu();
    }
}

void choice_front_door() {
    cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }

}

void choice_back_door() {
    cout << "You sneak to the back. The back door is also locked." << endl;
    int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_break_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_go_home() {
    cout << "You decide to go home. Game over." << endl;
}

void choice_knock_door() {
    cout << "You knock, no one says anything." << endl;
    int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_break_door() {
    cout << "You try breaking in and you able to get in." << endl;
    cout << "You enter the house... but it is dark and eerie." << endl;
    int choice;
  cout << "Choose: ";
  cin >> choice;
 choice_go_home();
  
}
