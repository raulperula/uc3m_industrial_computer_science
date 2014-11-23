#include "keyboard.h"

////////////////////////////////////
//
////////////////////////////////////
Keyboard::Keyboard(const string & name) :
    Input(name)
{
}

////////////////////////////////////
//
////////////////////////////////////
void Keyboard::process() throw (InputException)
{
    if (this->_processor == NULL)
        throw InputException("Keyboard exception: no processor assigned");

    string s;
    cin >> s;
    _processor->process(s);
}
