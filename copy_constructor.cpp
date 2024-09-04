#include <iostream>
using namespace std;

class Wall {
    double length;
    double height;
    
public:
    // Parameterized constructor
    Wall(double len, double hgt) {
        length = len;
        height = hgt;
    }
    
    // Copy constructor
    Wall(const Wall& obj) {
        length = obj.length;
        height = obj.height;
    }
    
    // Method to calculate the area
    double calculateArea() const {
        return length * height;
    }
};

int main() {
    Wall wall1(20.0, 30.0); // Using double values
    Wall wall2 = wall1;     // Copy constructor is called

    cout << "Area of wall 1: " << wall1.calculateArea() << endl;
    cout << "Area of wall 2: " << wall2.calculateArea() << endl;    

    return 0;
}
