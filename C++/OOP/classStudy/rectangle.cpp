#include <iostream>
using namespace std;


class Rectangle
{
    int length, width;

public:
    int area()
    {
        return length * width;
    }
    int perimeter()
    {
        return 2 * (length + width);
    }
    void setValues(int l, int w)
    {
        length = l;
        width = w;
    }
};

int main(int argc, char const *argv[])
{
    Rectangle *rect = new Rectangle();
    rect->setValues(10, 5);
    cout << rect->area() << endl;
    
    Rectangle r1;
    r1.setValues(10, 5);
    cout << r1.area() << endl;
    return 0;
}
