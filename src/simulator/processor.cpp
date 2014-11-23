#include "processor.h"

Processor::Processor(const string & name) :
    Device(name),
    _output(NULL)
{
}

Processor::~Processor()
{
}

void Processor::connectTo(Output & anoutput)
{
    this->_output = &anoutput;
}

void Processor::process(const string & data)
{
    this->_historial.push_front(data);

    if (data.find("history") == 0) {
        cout << "Historic: "
             << endl;
        for (list<string>::iterator it = this->_historial.begin(); it != this->_historial.end(); it++)
            cout << *it
                 << endl;
    }

    if (data.find("quit") == 0) {
        cout << "Quit!"
             << endl;
        exit(0);
    }
}

void Processor::process(const string & data, int n)
{
    string aux = data.substr(0, n);
    this->process(aux);
}

void Processor::operator>>(Output & O)
{
    this->connectTo(O);
}
