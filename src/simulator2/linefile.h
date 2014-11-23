#ifndef LINEFILE_H
#define LINEFILE_H

/** @brief Class for getting string lines from a file.

 Here you can explain exactly what the class do.
 @author Raul Perula
 @date 2013
 */

#include "inputfile.h"
#include "computerexception.h"

class LineFile : public InputFile {
    public:
        /** Empty constructor.
         */
        LineFile();

        /** Parametrized constructor.
         * @param name - name of the device
         */
        LineFile(const string & name);

        /** Parametrized constructor.
         * @param name - name of the device
         * @param filepath - path of the file
         */
        LineFile(const string & name, const string & filepath);

        void process() throw (InputException);
};

#endif // LINEFILE_H
