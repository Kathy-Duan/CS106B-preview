#include "LinearProbingSet.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


void LinearProbingSet::add(const string& val) {
    if (contains(val)) {
        return;
    }
    int index = hashFn(val) % allocatedSize;

    while (elems[index] != "" && elems[index] != "[TOMBSTONE]") {
        index = (index + 1) % allocatedSize;
    }

    elems[index] = value;
    numElems++;
}