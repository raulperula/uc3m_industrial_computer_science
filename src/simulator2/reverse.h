#ifndef REVERSE_H
#define REVERSE_H

/** @brief Class for reversing strings from an Input.

 Here you can explain exactly what the class do.
 @author Raul Perula
 @date 2013
 */

#include <stdio.h>
#include "processor.h"
#include "computerexception.h"

class Reverse : public Processor {
    public:
        /** Empty constructor.
         */
        Reverse();

        /** Parametrized constructor.
         * @param name - name of the device
         */
        Reverse(const string & name);

        void process(const string & data) throw (ProcessorException);

        void process(const string & data, int n) throw (ProcessorException);
};

#endif // REVERSE_H
