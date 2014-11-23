#ifndef WORDFILE_H
#define WORDFILE_H

/** @brief Class for getting characters from a file.

 Here you can explain exactly what the class do.
 @author Raul Perula
 @date 2013
 */

#include "inputfile.h"
#include "computerexception.h"

class WordFile : public InputFile {
    public:
        /** Empty constructor.
         */
        WordFile();

        /** Parametrized constructor.
         * @param name - name of the device
         */
        WordFile(const string & name);

        /** Parametrized constructor.
         * @param name - name of the device
         * @param filepath - path of the file
         */
        WordFile(const string & name, const string & filepath);

        void process() throw (InputException);
};

#endif // WORDFILE_H
