#ifndef INPUT_H
#define INPUT_H

#include "device.h"
#include "processor.h"

class Input : public Device {
    public:
        Input(const string & name);
        virtual ~Input();

        void connectTo(Processor & aprocessor);

        virtual void process() = 0;

        Processor & operator>>(Processor & P);

    protected:
        Processor *_processor;
};

#endif // INPUT_H
