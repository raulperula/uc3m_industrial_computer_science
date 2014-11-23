#include "charkeyboard.h"

////////////////////////////////////
//
////////////////////////////////////
CharKeyboard::CharKeyboard(const string & name) :
    Keyboard(name)
{
}

////////////////////////////////////
//
////////////////////////////////////
void CharKeyboard::process() throw (InputException)
{
    if (this->_processor == NULL)
        throw InputException("Input exception: no processor assigned");

    string s;
    cout << getName()
         << " processing each character."
         << endl;
    cin >> s;

    for (unsigned i = 0; i < s.size(); ++i) {
        string tmp;
        tmp += s[i];
        _processor->process(tmp);
    }
}
