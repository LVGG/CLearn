#include <iostream>

using namespace std;

class Shape {
    public:
        void setWidth(int w) {
            width = w;
        }
        void setHeight(int h) {
            height = h;
        }

    protected:
        int width;
        int height;
};


class Rectangle: public Shape {
    public:
        int getArea() {
            return (width * height);
        }

};


int main()
{
    Rectangle rect;
    rect.setWidth(85);
    rect.setHeight(45);
    cout << "Total area: " << rect.getArea() << endl;

    // rect.

    return 0;
}
