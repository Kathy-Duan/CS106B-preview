#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include <deque>


using namespace std;


void reverseQueue(queue<string> & queue);


int main() {
    queue<string> queue1(deque<string>{"a", "b", "c"});
    reverseQueue(queue1);
    queue<string> queue2(deque<string>{""});
    reverseQueue(queue2);
    queue<string> queue3(deque<string>{"a"});
    reverseQueue(queue3);
    return 0;
}


void reverseQueue(queue<string> & queue) {
    string element;
    string newElement;
    stack<string> reverseElements;
    while (!queue.empty()) {
        element = queue.front();
        queue.pop();
        reverseElements.push(element);
    }
    while (!reverseElements.empty()) {
        newElement = reverseElements.top();
        queue.push(newElement);
        reverseElements.pop();
        cout << newElement << endl;
    }
    }