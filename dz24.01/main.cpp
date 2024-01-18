#include <Windows.h>
#include <iostream>
#include "stack.h"


int main() {
    Stack stack(10);

    stack.push('a');
    stack.push('b');
    stack.push('c');

    for (int i = stack.size() - 1; i >= 0; i--) {
        char symbol = stack.pop();
        std::cout << symbol << std::endl;
    }


    return 0;
}