#ifndef MYCC_H
#define MYCC_H

#include <MyC.h>

class MyCC {
    public:
        MyCC() {}
        ~MyCC() {}
        //void readFromMyC(const MyC & M) {_val = M.getVal();}
        // La siguiente funcion da error
        void readFromMyC(const MyC & M) {_val = M.getValNoConst();}
    private:
        float _val;
};

#endif // MYCC_H
