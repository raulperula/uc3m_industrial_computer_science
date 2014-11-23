#ifndef MYC_H
#define MYC_H

class MyC {
    public:
        MyC() {_val = 10;}
        ~MyC() {}
        void setVal(int v) {_val = v;}
        int getVal() const {return _val;}
        int getValNoConst() {return _val;}
    private:
        int _val;
};

#endif // MYC_H
