#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "Learning exceptions in C++" << endl;
    try {
        cout << "Inside try block" << endl;
        throw 99;
        cout << "This is not executed" << endl;
    }
    catch(int i) {
        cout << "Catched exception with value: " << i << endl;
    }
    cout << "END" << endl;

    return 0;
}
