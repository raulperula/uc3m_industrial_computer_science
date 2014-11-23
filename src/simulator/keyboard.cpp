#include "keyboard.h"

Keyboard::Keyboard(const string & name) :
    Input(name)
{
}

void Keyboard::process()
{
    string s;
    cin >> s;
    _processor->process(s);
}
