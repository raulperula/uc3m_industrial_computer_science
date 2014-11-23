#include <iostream>
#include <MyCC.h>
#include <MyCCC.h>

using namespace std;

int main() {
    // Ejemplo uso funciones constantes
    MyC M;
    MyCC M1;
    MyCCC M2;

    M1.readFromMyC(M);
    M2.foo();

    // Ejemplo memoria dinamica
    int *v = new int[10]; // vector entero de 10 elementos
    v[0] = v[1] = 1;
    cout << v[0] << ", " << v[1] << endl;
    delete[] v;
}
