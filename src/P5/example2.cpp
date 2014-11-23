
...

int Operation::method(int a, int b) {
    cout << "Operandos " << a << " y " << b << endl;
    return 0;
}

class Addition: public Operation {
    public:
        int method(int a, int b) {
            Operation::method(a, b);
            return a + b;
        }
};

...
