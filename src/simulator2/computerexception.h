#ifndef COMPUTEREXCEPTION_H
#define COMPUTEREXCEPTION_H

/** @brief Class for managing exceptions.

 Here you can explain exactly what the class do.
 @author Raul Perula
 @date 2013
 */

#include <iostream>

using namespace std;

class ComputerException {
    public:
        /** Empty constructor.
         */
        ComputerException();

        /** Parametrized constructor.
         * @param msg - received message
         */
        ComputerException(const string & msg);

        string getMessage();

    protected:
        string message; /**<initial message*/
};

class InputException : public ComputerException {
    public:
        /** Empty constructor.
         */
        InputException();

        /** Parametrized constructor.
         * @param msg - received message
         */
        InputException(const string & msg);
};

class ProcessorException : public ComputerException {
    public:
        /** Empty constructor.
         */
        ProcessorException();

        /** Parametrized constructor.
         * @param msg - received message
         */
        ProcessorException(const string & msg);
};

class OutputException : public ComputerException {
    public:
        /** Empty constructor.
         */
        OutputException();

        /** Parametrized constructor.
         * @param msg - received message
         */
        OutputException(const string & msg);
};

#endif // COMPUTEREXCEPTION_H
