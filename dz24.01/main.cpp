#include "stack.h"

int main() {
    Stack<int> stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    for (int i = 0; i < stack.size(); i++) {
        std::cout << stack.pop() << std::endl;
    }

    return 0;
}