#include "OurStack.h"

void OurStack::push(int value) {
    if (logicalSize == allocatedSize) {
        resize();
    }
    elems[logicalSize] = value;
    logicalSize++;
}

void OurStack::resize() {
    allocatedSize *= 2;
    int* helper = new int[allocatedSize];
    for (int i = 0; i < logicalSize; i++) {
        helper[i] = elems[i];
    }
    delete[] elems;
    elems = helper;
}