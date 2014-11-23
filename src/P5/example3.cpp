
#include <iostream>

class Animal {
    protected:
        int age;
    public:
        Animal() {this->age = -1;}
        Animal(int n) {this->age = n;}
        virtual int getAge() = 0;
        virtual void print() {cout << "An animal " << endl;}
        void food() {cout << "not defined yet" << endl;};
};

class Aquatic : public Animal {
    public:
        Aquatic() : Animal(0) {}
        Aquatic(int nn) : Animal(nn) {}
        int getAge() {
            return this->age;
        }
        void print() {
            cout << "Aquatic Animal: " << this->age << " years old" << endl;
        }
        void food() {
            cout << "little fishes and seaweeds" << endl;
        }
};


int main() {
    Aquatic *A = new Aquatic(11);
    cout << "Aquatic:" << endl;
    A->print();
    A->food();

    Animal *animal = a;
    cout << "Animal:" << endl;
    animal->print();
    animal->food();

    return 0;
}
