#include "linekeyboard.h"
#include "charkeyboard.h"
#include "uppercase.h"
#include "reverse.h"
#include "display.h"
#include "printer.h"

int main()
{
    LineKeyboard keyboard1("logitech");
    CharKeyboard keyboard2("logitech char");
    CharKeyboard char_keyboard("microsoft");
    Uppercase processor1("intel");
    Reverse processor2("intel reverse");
    Display display("lg");
    Printer printer("Ricoh");

    keyboard1.connectTo(processor1);
    processor1.connectTo(display);

    keyboard2 >> processor2 >> printer;

    keyboard1.process();

    keyboard2.process();
}
