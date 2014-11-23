#ifndef OUTPUT_H
#define OUTPUT_H

/** @brief Interface class for Outputs.

 Here you can explain exactly what the class do.
 @author Raul Perula
 @date 2013
 */

#include "device.h"

class Output : public Device {
    public:
        /** Empty constructor.
         */
        Output();

        /** Parametrized constructor.
         * @param name - name of the device
         */
        Output(const string & name);

        /** Destructor.
         */
        virtual ~Output();

        virtual void process(const string & data) = 0;
};

#endif // OUTPUT_H
