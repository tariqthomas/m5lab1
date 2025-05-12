#include <iostream> 
using namespace std;


void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_knock_door();
void choice_break_door();
// TODO: add more choices here

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout<<"4.knock on front door"<< endl;
  cout<<"5.try breaking in"<<endl;
  cout << "6. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
  
  } else if (3 == choice) {
    
  } else if (4 == choice) {

  } else if (5==choice){

  }else if (6==choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
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
  cout << "sneak to the back door" << endl;
  cout << "back door also locked ";
  cout << "Do you:" << endl;
  cout << "1. try breaking in" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_break_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_knock_door() {
  cout << "Try knocking on door." << endl;
  cout << "Someone answers. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Ask to be let in" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    cout << "They let you in. You win!" << endl;
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_break_door() {
  cout << "Try breaking in." << endl;
  cout << "You unlock the door. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Explore inside the house" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    cout << "You find a dead old person." << endl;
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_go_home() {
  cout << "give up and go home." << endl;
}