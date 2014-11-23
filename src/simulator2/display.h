#ifndef DISPLAY_H
#define DISPLAY_H

/** @brief Class for displaying by screen.

 Here you can explain exactly what the class do.
 @author Raul Perula
 @date 2013
 */

#include <iostream>
#include "output.h"

class Display : public Output {
    public:
        /** Empty constructor.
         */
        Display();

        /** Parametrized constructor.
         * @param name - name of the device
         */
        Display(const string & name);

        void process(const string & data);
};

#endif // DISPLAY_H
