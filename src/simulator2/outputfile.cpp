#include "outputfile.h"

////////////////////////////////////
//
////////////////////////////////////
OutputFile::OutputFile(const string & name) :
    Output(name)
{
}

////////////////////////////////////
//
////////////////////////////////////
OutputFile::OutputFile(const string & name, const string & filepath) :
    Output(name),
    _filepath(filepath)
{
}

////////////////////////////////////
//
////////////////////////////////////
void OutputFile::setFilePath(const string & path)
{
    this->_filepath = path;
}

////////////////////////////////////
//
////////////////////////////////////
string OutputFile::getFilePath()
{
    return this->_filepath;
}

////////////////////////////////////
//
////////////////////////////////////
void OutputFile::process(const string & data) throw (OutputException)
{
    ofstream file(this->_filepath.c_str(), ios::out | ios::app);
    if (!file.is_open()) {
        string msj = "OutputFile exception: error opening output file ";
        msj += this->_filepath.c_str();
        throw OutputException(msj);
    }

    //getting the time and date
    time_t rawtime;
    struct tm * timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);

    file << strtok(asctime(timeinfo), "\n")
         << ":"
         << data
         << endl;
    file.close();
}
