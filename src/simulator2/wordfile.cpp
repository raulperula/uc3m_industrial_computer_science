#include "wordfile.h"

////////////////////////////////////
//
////////////////////////////////////
WordFile::WordFile(const string & name) :
    InputFile(name)
{
}

////////////////////////////////////
//
////////////////////////////////////
WordFile::WordFile(const string & name, const string & filepath) :
    InputFile(name, filepath)
{
}

////////////////////////////////////
//
////////////////////////////////////
void WordFile::process() throw (InputException)
{
    ifstream file(this->_filepath.c_str());
    if (!file) {
        string msj = "WordFile exception: error opening input file ";
        msj += this->_filepath.c_str();
        throw InputException(msj);
    }

    cout << getName()
         << " processing each character in file."
         << endl;

    string word;
    while(!file.eof()) {
        file >> word;
        this->_processor->process(word);
    }
    file.close();
}
