#include <iostream>
#include "point.h"

using namespace std;
using namespace space;

int main() {
    // memoria dinamica objetos
    Point *P = new Point;
    Point *P1 = new Point(10, 10);
    P1->display();
    delete P;
    delete P1;

    Point *P2 = new Point;
    for (int i = 0; i < P2->size; i++) {
        cout << "v[" << i << "] = " << P2->v[i] << endl;
    }
}
