#include <iostream>
#include <queue>


using namespace std;

int stackPush(queue<int>& q, int x);
int stackPop(queue<int>& q);
int stackPop(queue<int>& q);
bool stackEmpty(queue<int>& q);
int stackPeek(queue<int>& q);
int stackSize(queue<int>& q);


int main() {
    queue<int> q;
    stackPush(q, 1);
    stackPush(q, 2);
    stackPush(q, 3);
    stackPush(q, 4);
    cout << "Top: " << stackPeek(q) << endl;       // 4
    stackPop(q);
    cout << "Top after pop: " << stackPeek (q) << endl; // 3
    cout << "Size: " << stackSize(q) << endl;    // 2
    while (!stackEmpty(q)) {
        cout << "Popping: " << stackPeek(q) << endl;
        stackPop(q);
    }
    return 0;
}


int stackPush(queue<int>& q, int x) {
    int qSize = q.size();
    q.push(x);
    for (int i = 0; i < qSize; i++) {
        q.push(q.front());
        q.pop();
    }
    return 0;
}

int stackPop(queue<int>& q) {
    if (q.empty()) {
        cout << "The stack is empty.";
        return -1;
    }
    q.pop();
    return 0;
}


bool stackEmpty(queue<int>& q) {
    return q.empty();
}

int stackPeek(queue<int>& q) {
    if (q.empty()) {
        cout << "The stack is empty.";
        return -1;
    }
    return q.front();
    return 0;
}


int stackSize(queue<int>& q) {
    return q.size();
}