#include "reverse.h"

Reverse::Reverse(const string & name) :
    Processor(name)
{
}

void Reverse::process(const string & data)
{
    Processor::process(data);

    string processed_data = "Processed by Uppercase processor: ";

    for (size_t i = data.size(); i > 0; i--) {
        processed_data += data[i - 1];
    }
    this->_output->process(processed_data);
}

void Reverse::process(const string & data, int n)
{
    Processor::process(data);

    string processed_data = "Processed first ";
    char aux[10];
    sprintf(aux, "%d", n);
    processed_data += aux;
    processed_data += " caracters by Uppercase processor: ";

    if (n > (int) data.size())
        n = data.size();

    for (size_t i = n; i > 0; i--)
        processed_data += data[i - 1];

    for (size_t i = n; i < data.size(); i++)
        processed_data += data[i];

    this->_output->process(processed_data);
}
