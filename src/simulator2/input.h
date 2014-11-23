#ifndef INPUT_H
#define INPUT_H

/** @brief Interface class for Inputs.

 Here you can explain exactly what the class do.
 @author Raul Perula
 @date 2013
 */

#include "device.h"
#include "processor.h"

class Input : public Device {
    public:
        /** Empty constructor.
         */
        Input();

        /** Parametrized constructor.
         * @param name - name of the device
         */
        Input(const string & name);

        /** Destructor.
         */
        virtual ~Input();

        virtual void process() = 0;

        void connectTo(Processor & aprocessor);

        Processor & operator>>(Processor & P);

    protected:
        Processor *_processor; /**<connected processor*/
};

#endif // INPUT_H
