#ifndef INPUTFILE_H
#define INPUTFILE_H

/** @brief Class for getting inputs from a file.

 Here you can explain exactly what the class do.
 @author Raul Perula
 @date 2013
 */

#include <fstream>
#include "input.h"

class InputFile : public Input {
    public:
        /** Empty constructor.
         */
        InputFile();

        /** Parametrized constructor.
         * @param name - name of the device
         */
        InputFile(const string & name);

        /** Parametrized constructor.
         * @param name - name of the device
         * @param filepath - path of the file
         */
        InputFile(const string & name, const string & filepath);

        void setFilePath(const string & filepath);

        string getFilePath();

    protected:
        string _filepath; /**<initial filepath*/
};

#endif // INPUTFILE_H
