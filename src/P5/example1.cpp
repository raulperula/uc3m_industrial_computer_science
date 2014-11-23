class Operation { // abstract class
    public:
        virtual int method(int a, int b) = 0;
};

class Addition : public Operation {
    public:
        int method(int a, int b) {return a + b;}
};

class Subtraction : public Operation {
    public:
        int method(int a, int b) {return a - b;}
};

int main() {
    int n1, n2;
    cout << "Introduce dos enteros:" << endl;
    cin >> n1 >> n2;

    Addition A;
    Subtraction S;
    cout << "Adding " << n1 << "+" << n2 << "=" << A.method(n1, n2) << endl;
    cout << "Subtracting " << n1 << "-" << n2 << "=" << S.method(n1,n2) << endl;

    return 0;
}
