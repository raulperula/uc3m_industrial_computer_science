#include "charkeyboard.h"

CharKeyboard::CharKeyboard(const string & name) :
    Keyboard(name)
{
}

void CharKeyboard::process()
{
    cout << getName()
         << " processing each character."
         << endl;

    string s;
    cin >> s;

    for (unsigned i = 0; i < s.size(); ++i) {
        string tmp;
        tmp += s[i];
        _processor->process(tmp);
    }
}
