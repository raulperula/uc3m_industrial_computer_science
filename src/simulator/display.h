#ifndef DISPLAY_H
#define DISPLAY_H

#include <iostream>
#include "output.h"

class Display : public Output {
    public:
        Display(const string & name);

        void process(const string & data);
};

#endif // DISPLAY_H
