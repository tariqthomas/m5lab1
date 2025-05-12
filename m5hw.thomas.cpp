#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    string month1, month2, month3;
    double rainfall1, rainfall2, rainfall3;

    
    cout << "Enter the name of the first month: ";
    cin >> month1;
    cout << "Enter the rainfall for " << month1 << " (in inches): ";
    cin >> rainfall1;

    cout << "Enter the name of the second month: ";
    cin >> month2;
    cout << "Enter the rainfall for " << month2 << " (in inches): ";
    cin >> rainfall2;

    cout << "Enter the name of the third month: ";
    cin >> month3;
    cout << "Enter the rainfall for " << month3 << " (in inches): ";
    cin >> rainfall3;

    
    double averageRainfall = (rainfall1 + rainfall2 + rainfall3) / 3.0;

    
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 << " and " << month3;
    cout << " is " << averageRainfall << " inches." << endl;

    return 0;
}
