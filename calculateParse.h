#include "complie.h"

#ifdef ALG_CALCULATEPARSE
#ifndef CALCULATEPARSE_H_
#define CALCULATEPARSE_H_

#pragma warning(disable:4290)

class FormatErr {
public:
    FormatErr(const char* errPtr) : errPtr(errPtr) {}
private:
    const char* errPtr;
};

class Calculate{
public:
    static double execute(const char* str) throw (FormatErr);
private:
    static double getTerm(const char*& str) throw (FormatErr);
    static double parseBrackt(const char*& str) throw (FormatErr);
    static double getNumber(const char*& str) throw (FormatErr);
};


#endif // !CALCULATEPARSE_H_
#endif // ALG_CALCULATEPARSE

