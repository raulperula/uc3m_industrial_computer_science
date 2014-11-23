////////////////////////////////////////////////////
// person.h
////////////////////////////////////////////////////

#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include <string>

using namespace std;

/**\brief This class represents a Person
    */
class Person {
    public:
        /** Empty constructor
        */
        Person();

        /** Parametrized constructor
        */
        Person(string name, int age);

        /** Copy constructor
        */
        Person(const Person & P);

        /** Destructor
        */
        ~Person();

        /** Assign operator
        */
        Person & operator=(const Person & P);

        string getName();
        int getAge();
        void setName(string name);
        void setAge(int age);

    private:
        string _name;
        int _age;
};


#endif
