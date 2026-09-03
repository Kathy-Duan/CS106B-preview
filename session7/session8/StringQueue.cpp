#include "StringQueue.h"

StringQueue::StringQueue() {
    capacity = 10;
    size = 0;
    elements = new string[capacity];
}

StringQueue::~StringQueue() {
    delete[] elements;
}