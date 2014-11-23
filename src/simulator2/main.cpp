#include <iostream>
#include "charkeyboard.h"
#include "linekeyboard.h"
#include "wordfile.h"
#include "linefile.h"
#include "uppercase.h"
#include "reverse.h"
#include "display.h"
#include "outputfile.h"
#include "printer.h"
#include "computerexception.h"

using namespace std;

int main()
{
    try {
        // Inputs
        CharKeyboard CK("logitech char");
        LineKeyboard LK("logitech");
        WordFile WF("qixote", "input.txt");
        LineFile LF("qixote", "input.txt");

        // Processors
        Reverse R("intel reverse");
        Uppercase UC("intel");

        // Outputs
        Display D("lg");
        OutputFile OF("outputfile");
        OF.setFilePath("output.txt");
        Printer P("Ricoh");

        //////////////////////////////////////// Actions

        // CharKeyboard -> Uppercase -> Display
        CK >> UC;
        UC.connectTo(D);
        CK.process();
        cout << "ENTER to continue..." << endl;
        getchar();

        // LineKeyboard -> Reverse -> Display
        LK.connectTo(R);
        R >> D;
        LK.process();
        cout << "ENTER to continue..." << endl;
        getchar();

        // WordFile -> Uppercase -> Printer
        WF >> UC >> P;
        WF.process();
        cout << "ENTER to continue..." << endl;
        getchar();

        // LineFile -> Uppercase -> OutputFile
        LF >> UC >> OF;
        LF.process();
    }
    catch(InputException & e) {
        cerr << "Unrecovery error at input module: "
             << e.getMessage()
             << endl;
        return -1;
    }
    catch(ProcessorException & e) {
        cerr << "Unrecovery error at processor module: "
             << e.getMessage()
             << endl;
        return -1;
    }
    catch(OutputException & e) {
        cerr << "Unrecovery error at output module: "
             << e.getMessage()
             << endl;
        return -1;
    }
    catch(...) {
        cerr << "Unrecovery error at unknown module"
             << endl;
        return -1;
    }
}
