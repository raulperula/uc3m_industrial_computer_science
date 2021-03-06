#include "inputfile.h"

////////////////////////////////////
//
////////////////////////////////////
InputFile::InputFile(const string & name) :
    Input(name)
{
}

////////////////////////////////////
//
////////////////////////////////////
InputFile::InputFile(const string & name, const string & filepath) :
    Input(name),
    _filepath(filepath)
{
}

////////////////////////////////////
//
////////////////////////////////////
void InputFile::setFilePath(const string & filepath)
{
    this->_filepath = filepath;
}

////////////////////////////////////
//
////////////////////////////////////
string InputFile::getFilePath()
{
    return this->_filepath;
}
