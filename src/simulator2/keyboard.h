#ifndef KEYBOARD_H
#define KEYBOARD_H

/** @brief Class for receive inputs by Keyboard.

 Here you can explain exactly what the class do.
 @author Raul Perula
 @date 2013
 */

#include "input.h"
#include "processor.h"
#include "computerexception.h"

class Keyboard : public Input {
    public:
        /** Empty constructor.
         */
        Keyboard();

        /** Parametrized constructor.
         * @param name - name of the device
         */
        Keyboard(const string & name);

        void process() throw (InputException);
};

#endif // KEYBOARD_H
