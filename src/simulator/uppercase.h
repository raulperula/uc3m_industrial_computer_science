#ifndef UPPERCASE_H
#define UPPERCASE_H

#include <iostream>
#include "processor.h"

class Uppercase : public Processor {
    public:
        Uppercase(const string & name);

        void process(const string & data);
        void process(const string & data, int n);
};

#endif // UPPERCASE_H
