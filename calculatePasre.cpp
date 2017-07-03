#include "complie.h"

#ifdef ALG_CALCULATEPARSE

#include <stdlib.h>
#include "calculateParse.h"

double Calculate::execute(const char* str) throw (FormatErr)
{
    try {
        double firTerm = getTerm(str);
        while (*str != 0) {
            if (*str == '+') {
                firTerm += getTerm(++str);
            } else if (*str == '-') {
                firTerm -= getTerm(++str);
            } else {
                throw FormatErr(str);
            }
        }
        return firTerm;
    } catch (FormatErr err) {
        throw err;
    }
}

double Calculate::getTerm(const char*& str) throw (FormatErr)
{
    try {
        double first = getNumber(str);
        while (*str != '+' && *str != '-' && *str != 0) {
            if (*str == '*') {
                first *= getNumber(++str);
            } else if (*str == '/') {
                first /= getNumber(++str);
            } else {
                throw FormatErr(str);
            }
        }
        return first;
    } catch (FormatErr err) {
        throw err;
    }
}

double Calculate::getNumber(const char*& str)
{
    char* end = nullptr;
    double num = strtod(str, &end);
    str = end;
    return num;
}

#endif // ALG_CALCULATEPARSE