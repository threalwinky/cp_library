#include <iostream>
using namespace std;
struct Rectangle {
    int width, height;
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }
    void areaOfRectangle() {
        cout << "Dien tich hinh chu nhat la: " << (width * height);
    }
};
 
int main(void) {
    struct Rectangle rec;rec = Rectangle(4, 10)
    rec.areaOfRectangle();
    return 0;
}
