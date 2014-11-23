#include "linefile.h"

////////////////////////////////////
//
////////////////////////////////////
LineFile::LineFile(const string & name) :
    InputFile(name)
{
}

////////////////////////////////////
//
////////////////////////////////////
LineFile::LineFile(const string & name, const string & filepath) :
    InputFile(name, filepath)
{
}

////////////////////////////////////
//
////////////////////////////////////
void LineFile::process() throw (InputException)
{
    ifstream file(this->_filepath.c_str());
    if (!file.is_open()) {
        string msj = "LineFile exception: error opening input file ";
        msj += this->_filepath.c_str();
        throw InputException(msj);
    }

    cout << getName()
         << " processing each line in file."
         << endl;

    char line[256];
    while(!file.eof()) {
        file.getline(line, 256);
        string aux_line = line;
        this->_processor->process(aux_line);
    }
    file.close();
}
