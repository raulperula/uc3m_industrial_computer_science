#ifndef PRINTER_H
#define PRINTER_H

/** @brief Class for showing strings by printer.

 Here you can explain exactly what the class do.
 @author Raul Perula
 @date 2013
 */

#include "output.h"

class Printer : public Output {
    public:
        /** Empty constructor.
         */
        Printer();

        /** Parametrized constructor.
         * @param name - name of the device
         */
        Printer(const string & name);

        void process(const string & data);
};

#endif // PRINTER_H
