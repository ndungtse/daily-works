// classes and uniform initialization
#include <iostream>
using namespace std;
class Circle
{
    double radius;

public:
    Circle(double r, int b) { radius = r; }
    double circum() { return 2 * radius * 3.14159265; }
};
int main()
{
    // Circle foo(10.0); // functional form
    // Circle bar = 20.0 ;   // assignment init.
    Circle baz{30.0, 5};    // uniform init.
    Circle qux = {40.0, 5}; // POD-like
    // cout << "foo's circumference: " << foo.circum() << '\n';
    // cout << "bar's circumference: " << bar.circum() << '\n';
    cout << "baz's circumference: " << baz.circum() << '\n';
    cout << "qux's circumference: " << qux.circum() << '\n';
    return 0;
}