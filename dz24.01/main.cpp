#include "stack.h"

int main() {
    string str = "{x-y-z} * [x + 2y] - (z + 4x)";
    if (isCorrect(str)) {
        cout << "Рядок коректний" << endl;
    }
    else {
        cout << "Рядок не коректний" << endl;
    }

    str = "([x-y-z} * [x + 2y) - {z + 4x)}";
    if (isCorrect(str)) {
        cout << "Рядок коректний" << endl;
    }
    else {
        cout << "Рядок не коректний" << endl;
    }
    return 0;
}