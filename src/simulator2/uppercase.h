#ifndef UPPERCASE_H
#define UPPERCASE_H

/** @brief Class for uppercase strings from an Input.

 Here you can explain exactly what the class do.
 @author Raul Perula
 @date 2013
 */

#include "processor.h"
#include "computerexception.h"

class Uppercase : public Processor {
    public:
        /** Empty constructor.
         */
        Uppercase();

        /** Parametrized constructor.
         * @param name - name of the device
         */
        Uppercase(const string & name);

        void process(const string & data) throw (ProcessorException);

        void process(const string & data, int n) throw (ProcessorException);
};

#endif // UPPERCASE_H
