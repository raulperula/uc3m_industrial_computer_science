#include "uppercase.h"

////////////////////////////////////
//
////////////////////////////////////
Uppercase::Uppercase(const string & name) :
    Processor(name)
{
}

////////////////////////////////////
//
////////////////////////////////////
void Uppercase::process(const string & data) throw (ProcessorException)
{
    if (this->_output == NULL)
        throw ProcessorException("Uppercase processor exception: no output assigned");

    Processor::process(data);

    string processed_data = "Processed by Uppercase processor: ";
    for (size_t i = 0; i < data.size(); i++) {
        processed_data += toupper(data[i]);
    }

    this->_output->process(processed_data);
}

////////////////////////////////////
//
////////////////////////////////////
void Uppercase::process(const string & data, int n) throw (ProcessorException)
{
    if (this->_output == NULL)
        throw ProcessorException("Uppercase processor exception: no output assigned");

    Processor::process(data);
    string processed_data = "Processed first ";
    processed_data += n;
    processed_data += "caracters by Uppercase processor: ";

    for (size_t i = 0; i < data.size() && i < (size_t) n; i++) {
        processed_data += toupper(data[i]);
    }

    this->_output->process(processed_data);
}
