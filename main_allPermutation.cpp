#include "complie.h"
#ifdef ALG_ALLPERMUTATION

#include "allPermutation.h"
#include <iostream>

using namespace std;

int main()
{
    vector<vector<int>> vec = allPermutaion<4>().execute();
    for (auto vecIter = vec.begin(); vecIter != vec.end(); ++vecIter) {
        for (auto iter = vecIter->begin(); iter != vecIter->end(); ++iter) {
            cout << *iter << " ";
        }
        cout << endl;
    }
}

#endif // ALG_ALLPERMUTATION