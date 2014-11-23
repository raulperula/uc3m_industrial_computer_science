
class Operation {
    virtual int method(int a, int b) = 0;
};

class Addition : Operation {
    public:
        int method(int a, int b) {return a + b;}
};

class Subtraction : Operation {
    public:
        int method(int a, int b) {return a - b;}
};

class Multiplication : public Operation {
    public:
        int method(int a, int b) {return a * b;}
};

int main() {
    int n1, n2;
    cout << "Introduce dos enteros:" << endl;
    cin >> n1 >> n2;

    srand(time(NULL));     /* initialize random seed: */
    Operation *O;
    switch(rand() % 3){
        case 0: O = new Addition;
            cout << "Operation ADDITION" << endl;
            break;
        case 1: O = new Subtraction;
            cout << "Operation SUBTRACTION" << endl;
            break;
        case 2: O = new Multiplication;
            cout << "Operation MULTIPLICATION" << endl;
            break;
    }
    cout << "Result: " << O->method(n1, n2) << endl;
}
