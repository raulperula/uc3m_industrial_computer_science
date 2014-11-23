////////////////////////////////////////////////////
// main.cpp
////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <person.h>

using namespace std;

int main(int argc, char **argv) {
    Person P("Raul", 25);
    cout << "Nombre: " << P.getName() << " Edad: " << P.getAge() << endl;

    Person P2(P);
    cout << "Nombre: " << P2.getName() << " Edad: " << P2.getAge() << endl;
    cout << "Son iguales!!" << endl;

    Person P3;
    P3.setAge(18);
    P3.setName("Susana");
    cout << "Nombre: " << P3.getName() << " Edad: " << P3.getAge() << endl;

    // personas con una 's' en el nombre y personas mayores de 18
    string aux = P.getName();
    string aux2 = P2.getName();
    string aux3 = P3.getName();
    if (aux.find("s") != string::npos) {
        cout << "P tiene una 's' en el nombre" << endl;
    }
    else if (aux2.find("s") != string::npos) {
        cout << "P2 tiene una 's' en el nombre" << endl;
    }
    else if (aux3.find("s") != string::npos) {
        cout << "P3 tiene una 's' en el nombre: " << aux3 << endl;
    }

    int ages[3] = {P.getAge(), P2.getAge(), P3.getAge()};

    for (int i = 0; i < 3; i++) {
        if(ages[i] > 18) {
            cout << "P" << i << " es mayor de edad" << endl;
        }
        else {
            cout << "P" << i << " es menor de edad" << endl;
        }
    }
}
