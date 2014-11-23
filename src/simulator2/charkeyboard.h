#ifndef CHARKEYBOARD_H
#define CHARKEYBOARD_H

/** @brief Class for get a char from Keyboard.

 Here you can explain exactly what the class do.
 @author Raul Perula
 @date 2013
 */

#include "keyboard.h"
#include "processor.h"
#include "computerexception.h"

class CharKeyboard : public Keyboard {
    public:
        /** Empty constructor.
         */
        CharKeyboard();

        /** Parametrized constructor.
         * @param name - name of the device
         */
        CharKeyboard(const string & name);

        void process() throw (InputException);
};

#endif // CHARKEYBOARD_H
