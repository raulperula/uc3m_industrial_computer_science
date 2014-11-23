#ifndef MYCCC_H
#define MYCCC_H

#include <MyC.h>

class MyCCC {
    public:
        MyCCC() {}
        ~MyCCC() {}
        // La siguiente funcion da error de compilacion
        int foo() const {return  _myc.getValNoConst()*10;}
        // Esta funcion si seria correcta
        //int foo() const {return  _myc.getVal()*10;}
    private:
        MyC _myc;
};

#endif // MYCCC_H
