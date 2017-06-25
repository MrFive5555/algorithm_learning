#include "complie.h"
#ifdef RANDOM

#ifndef RANDOM_H_
#define RANDOM_H_

class Random {
public:
    static int rand();
private:
    static bool initRandom;
};
#endif // !RANDOM_H_

#endif //!RANDOM