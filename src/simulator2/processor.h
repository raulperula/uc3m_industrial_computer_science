#ifndef PROCESSOR_H
#define PROCESSOR_H

/** @brief Interface class for a Processor.

 Here you can explain exactly what the class do.
 @author Raul Perula
 @date 2013
 */

#include <cstdlib>
#include <list>
#include "device.h"
#include "output.h"

class Processor : public Device {
    public:
        /** Empty constructor.
         */
        Processor();

        /** Parametrized constructor.
         * @param name - name of the device
         */
        Processor(const string & name);

        /** Destructor.
         */
        virtual ~Processor();

        void connectTo(Output & anoutput);

        virtual void process(const string & data);

        virtual void process(const string & data, int n);

        void operator>>(Output & O);

    protected:
        Output *_output; /**<connected output*/
        list<string> historial; /**<history list*/
};

#endif // PROCESSOR_H
