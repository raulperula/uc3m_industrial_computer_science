////////////////////////////////////////////////////
// main.cpp
////////////////////////////////////////////////////

#include <iostream>
#include <point.h>

using namespace std;
using namespace space;

int main(int argc, char **argv) {
    Point P;
    cout << P.getX() << endl;
    cout << P.getY() << endl;

    // prueba acceso variable interna (comentar)
//    P._x = 10; // imposible! ERROR!

    P.set(10, 10);
    cout << P.getX() << endl;
    cout << P.getY() << endl;

    P.display();

    // prueba de los constructores
    Point P2(100,100), P3(P2);
    cout << "P2: ";
    P2.display();
    cout << "P3: ";
    P3.display();

    // prueba multiple asignacion
    P = P2 = P3;
    cout << "Nuevo valor P1: " << endl;
    P.display();
}
