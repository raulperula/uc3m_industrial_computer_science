////////////////////////////////////////////////////
// person.cpp
////////////////////////////////////////////////////

#include "person.h"

///////////////////////////
//
/////////////////////////
Person::Person() {
    _name = "";
    _age = 0;
}

///////////////////////////
//
/////////////////////////
Person::Person(string name, int age) {
    _name = name;
    _age = age;
}

///////////////////////////
//
/////////////////////////
Person::Person(const Person & P) {
    _name = P._name;
    _age = P._age;
}

///////////////////////////
//
/////////////////////////
Person::~Person() {
}

///////////////////////////
//
/////////////////////////
Person & Person::operator=(const Person & P) {
    _name = P._name;
    _age = P._age;

    return *this;
}

////////////////////////////////////
//
////////////////////////////////////
string Person::getName() {
    return _name;
}

////////////////////////////////////
//
////////////////////////////////////
int Person::getAge() {
    return _age;
}

////////////////////////////////////
//
////////////////////////////////////
void Person::setName(string name) {
    _name = name;
}

////////////////////////////////////
//
////////////////////////////////////
void Person::setAge(int age) {
    _age = age;
}
