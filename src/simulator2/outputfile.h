#ifndef OUTPUTFILE_H
#define OUTPUTFILE_H

/** @brief Class for showing strings from a file.

 Here you can explain exactly what the class do.
 @author Raul Perula
 @date 2013
 */

#include <fstream>
#include <string.h>
#include <time.h>
#include "output.h"
#include "computerexception.h"

class OutputFile : public Output {
    public:
        /** Empty constructor.
         */
        OutputFile();

        /** Parametrized constructor.
         * @param name - name of the device
         */
        OutputFile(const string & name);

        /** Parametrized constructor.
         * @param name - name of the device
         * @param name - path of the file
         */
        OutputFile(const string & name, const string & filepath);

        void setFilePath(const string & path);

        string getFilePath();

        void process(const string & data) throw (OutputException);

    protected:
        string _filepath; /**<initial filepath*/
};

#endif // OUTPUTFILE_H
