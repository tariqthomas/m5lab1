#include <iostream>
using namespace std;

int main() {
    int number;

    

    cout << "Enter a number between 1 and 10: ";
    cin >> number;

    
    if (number < 1 || number > 10) {
        cout << "Invalid input! Please enter a number between 1 and 10." << endl;
        return 1;
    }

    
    cout << "Roman numeral: ";

    if (number == 1) cout << "I";
    else if (number == 2) cout << "II";
    else if (number == 3) cout << "III";
    else if (number == 4) cout << "IV";
    else if (number == 5) cout << "V";
    else if (number == 6) cout << "VI";
    else if (number == 7) cout << "VII";
    else if (number == 8) cout << "VIII";
    else if (number == 9) cout << "IX";
    else if (number == 10) cout << "X";

    cout << endl;

    return 0;
}
