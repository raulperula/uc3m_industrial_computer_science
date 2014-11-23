#ifndef OUTPUT_H
#define OUTPUT_H

#include "device.h"

class Output : public Device {
    public:
        Output(const string & name);
        virtual ~Output();

        virtual void process(const string & data) = 0;
};

#endif // OUTPUT_H
