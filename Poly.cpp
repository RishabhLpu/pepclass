#include <iostream>
using namespace std;

class Poly {
    private:
        int value;
    public:
        Poly() {
            value = 5;
        }
        // Overloading the increment operator
        void operator ++() {
            value += 10;
        }                                                                                                               
        void display() {
            cout << "Value: " << value << endl;
        }
};

int main() {
    Poly p1;
    p1.display();
    ++p1; // Using the overloaded increment operator
    p1.display(); // Displaying the value
    return 0;
}
