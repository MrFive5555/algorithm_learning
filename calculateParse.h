#include "complie.h"

#ifdef ALG_CALCULATEPARSE
#ifndef CALCULATEPARSE_H_
#define CALCULATEPARSE_H_

#pragma warning(disable:4290)

#include <stdexcept>

class FormatErr {
public:
    FormatErr(const char* errPtr) : errPtr(errPtr) {}
private:
    const char* errPtr;
};

class Calculate{
public:
    Calculate() : allowSign(true) {}
    double execute(const char* str) throw (FormatErr, std::invalid_argument);
private:
    double getTerm(const char*& str) throw (FormatErr, std::invalid_argument);
    double parseBrackt(const char*& str) throw (FormatErr, std::invalid_argument);
    double getNumber(const char*& str) throw (FormatErr, std::invalid_argument);
    bool allowSign;
};


#endif // !CALCULATEPARSE_H_
#endif // ALG_CALCULATEPARSE

