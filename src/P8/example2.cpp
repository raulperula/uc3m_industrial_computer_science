#include <iostream>
#include <cstring> //para el strcpy

using namespace std;

class MyException {
    public:
        char mesage[80];
        int number;
        MyException() {*mesage = 0; number = 0;};
        MyException(const char *msg, int n) {
            strcpy(this->mesage, msg);
            this->number = n;
        }
};

int main(int argc, char *argv[]) {
    int n;
    try {
        cout << "Insert a positive number: " << endl;
        cin >> n;
        if(n < 0) {
            throw MyException("Negative number!", n);
        }
    }
    catch(MyException e) {
        cerr << "ERROR: " << e.mesage << endl;
        cerr << "value = " << e.number << endl;
    }

    return 0;
}
