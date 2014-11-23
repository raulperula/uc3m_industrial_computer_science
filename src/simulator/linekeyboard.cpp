#include "linekeyboard.h"

LineKeyboard::LineKeyboard(const string & name) :
    Keyboard(name)
{
}

void LineKeyboard::process()
{
    cout << getName()
         << " processing each line."
         << endl;

    string line;
    char c;
    do {
        c = cin.get();
        line += c;
    }
    while(c != '\n');

    this->_processor->process(line);
    this->_processor->process(line, 10);
}
