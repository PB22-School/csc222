#include "Point.h"
#include <iostream>
using namespace std;

int main() {
    Point point1(5,5);
    Point point2(8,8);
    point1 = point1 + point2;
    cout << point1 << endl;
}