#include <iostream>
using namespace std;

int main() {
    double width, length, height, volume;

    
    cout << "Enter the width of the block: ";
    cin >> width;
    cout << "Enter the length of the block: ";
    cin >> length;
    cout << "Enter the height of the block: ";
    cin >> height;

    if (width <= 0 || length <= 0 || height <= 0) {
        cout << "Error: no side can be zero or less." << endl;
        return 1; 
    }


    
    volume = width * length * height;

  
    cout << "The volume of the block is: " << volume << " cubic units." << endl;

    return 0;
}
