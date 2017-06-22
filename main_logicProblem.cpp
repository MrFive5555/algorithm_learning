#ifdef MAIN_LOGINPROBLEM_CPP_

#include <iostream>
#include "logicProblem.h"

using namespace std;

int main()
{
    bool arr1[6][7] =
    {
        1, 1, 0, 0, 1, 0, 0,
        1, 1, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 1, 1, 0,
        0, 0, 0, 1, 0, 1, 1,
        0, 0, 1, 1, 1, 0, 1,
        0, 0, 1, 0, 1, 0, 0
    };
    LoginProblem<6, 7> pro1(arr1);
    pro1.print();

    bool arr2[8][10] =
    {
        1, 0, 1, 1, 0, 0, 0, 0, 0, 0,
        1, 1, 0, 0, 1, 1, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 1, 1, 0, 0, 0,
        0, 0, 0, 1, 0, 0, 0, 1, 1, 0,
        1, 0, 0, 0, 0, 0, 0, 1, 0, 1,
        0, 0, 0, 0, 1, 0, 0, 1, 0, 0,
        0, 0, 1, 0, 0, 0, 0, 0, 1, 1,
        0, 0, 0, 0, 0, 0, 0, 0, 1, 1
    };
    LoginProblem<8, 10> pro2(arr2);
    pro2.print();
}

#endif // MAIN_LOGINPROBLEM_CPP_