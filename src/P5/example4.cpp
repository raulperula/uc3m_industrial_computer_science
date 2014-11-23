
...

class Aquatic : public Animal {
...
    void operator ++() {this->age++;} //prefix
    void operator ++(int) {this->age++;} //postfix
    bool operator>(Aquatic A) {return this->age > A.age;}
};

...

int main() {
    ...
    Aquatic A1(1);
    Aquatic A2(2);
    cout << "A1 age:" << A1.getAge() << endl;
    cout << "A2 age:" << A2.getAge() << endl;

    if(A1 > A2) {
        cout << "A1 > A2" << endl;
    }
    else {
        cout << "A1 <= A2" << endl;
    }

    ++A1;
    A1++;

    cout << "A1 age:" << A1.getAge() << endl;
    cout << "A2 age:" << A2.getAge() << endl;

    if(A1 > A2) {
        cout << "A1 > A2 " << endl;
    }
    else {
        cout << "A1 <= A2 " << endl;
    }
    ...
}
