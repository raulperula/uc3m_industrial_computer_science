#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <cstdlib>
#include <list>
#include "device.h"
#include "output.h"

class Processor : public Device {
    public:
        Processor(const string & name);
        virtual ~Processor();

        void connectTo(Output & anoutput);

        virtual void process(const string & data);
        virtual void process(const string & data, int n);

        void operator>>(Output & O);

    protected:
        Output *_output;
        list<string> _historial;
};

#endif // PROCESSOR_H
