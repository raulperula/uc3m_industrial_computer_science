#ifndef DEVICE_H
#define DEVICE_H

/** @brief Principal class of the simulator implemented.

 Here you can explain exactly what the class do.
 @author Raul Perula
 @date 2013
 */

#include <iostream>

using namespace std;

class Device {
    public:
        /** Empty constructor.
         */
        Device();

        /** Parametrized constructor.
         * @param name - name of the device
         */
        Device(const string & name);

        /** Destructor.
         */
        ~Device();

        /** Get the name of the Device.
         The name is returned to know how named.
         @return name
         */
        const string & getName() const;

    private:
        string _name; /**<initial name*/
};

#endif // DEVICE_H
