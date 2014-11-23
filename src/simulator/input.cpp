#include "input.h"

Input::Input(const string & name) :
    Device(name),
    _processor(NULL)
{
}

Input::~Input()
{
}

void Input::connectTo(Processor & aprocessor)
{
    this->_processor = &aprocessor;
}

Processor & Input::operator>>(Processor & P)
{
    this->connectTo(P);
    return P;
}
