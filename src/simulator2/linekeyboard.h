#ifndef LINEKEYBOARD_H
#define LINEKEYBOARD_H

/** @brief Class for getting string lines from Keyboard.

 Here you can explain exactly what the class do.
 @author Raul Perula
 @date 2013
 */

#include "device.h"
#include "keyboard.h"

class LineKeyboard : public Keyboard {
    public:
        /** Empty constructor.
         */
        LineKeyboard();

        /** Parametrized constructor.
         * @param name - name of the device
         */
        LineKeyboard(const string & name);

        void process() throw (InputException);
};

#endif // LINEKEYBOARD_H
