#pragma once
#include <string>
using namespace std;

class StringQueue {
    public:
        StringQueue();
        ~StringQueue();


        void enqueue(string value);
        void dequeue();
        bool isEmpty()
    

    private:
        string* elements;
        int capacity;
        int size;
}