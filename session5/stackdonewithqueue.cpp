#include <iostream>
#include <queue>


using namespace std;


int main() {
    queue<string> queue1(deque<string>{"a", "b", "c"});
    return 0;
}


int stackAbility() {
    queue<int> abilityStack;
    int element;
    for (int i = 0; i < abilityStack.size() - 1; i++) {
        element = abilityStack.front();
        abilityStack.pop();
        abilityStack.push(element);
    }
    abilityStack.pop();
}