#include "stack.h"

int main() {
    string str = "{x-y-z} * [x + 2y] - (z + 4x)";
    if (isCorrect(str)) {
        cout << "����� ���������" << endl;
    }
    else {
        cout << "����� �� ���������" << endl;
    }

    str = "([x-y-z} * [x + 2y) - {z + 4x)}";
    if (isCorrect(str)) {
        cout << "����� ���������" << endl;
    }
    else {
        cout << "����� �� ���������" << endl;
    }
    return 0;
}