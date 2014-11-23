#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "processor.h"
#include "input.h"

class Keyboard : public Input {
    public:
        Keyboard(const string & name);

        void process();
};

#endif // KEYBOARD_H
