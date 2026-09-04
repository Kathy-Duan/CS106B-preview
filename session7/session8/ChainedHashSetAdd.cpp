#include "ChainedHashSet.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

void ChainedHashSet::add(const string& value) {
    if (contains(value)) {
        return;
    }

    if (numElems / buckets.size() >= 2) {
        rehash();
    }
    
    int index = hashFn(value);
    bucket[index].push_back(value);
    numElems++;
}