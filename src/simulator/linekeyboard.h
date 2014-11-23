#ifndef LINEKEYBOARD_H
#define LINEKEYBOARD_H

#include "device.h"
#include "keyboard.h"

class LineKeyboard : public Keyboard {
    public:
        LineKeyboard(const string & name);

        void process();
};

#endif // LINEKEYBOARD_H
