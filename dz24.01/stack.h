#include <iostream> 
#include <stack>

using namespace std;

enum TokenType {
    L_CURLY,
    R_CURLY,
    L_ROUND,
    R_ROUND,
    L_SQUARE,
    R_SQUARE
};

struct Token {
    TokenType type;
    int position;
};

bool isPair(TokenType left, TokenType right) {
    switch (left) {
    case L_CURLY:
        return right == R_CURLY;
    case R_CURLY:
        return left == L_CURLY;
    case L_ROUND:
        return right == R_ROUND;
    case R_ROUND:
        return left == L_ROUND;
    case L_SQUARE:
        return right == R_SQUARE;
    case R_SQUARE:
        return left == L_SQUARE;
    }

    return false;
}

bool isCorrect(const string& str) {
    stack<Token> stack;

    for (int i = 0; i < str.size(); i++) {
        char c = str[i];

        TokenType type;
        switch (c) {
        case '{':
            type = L_CURLY;
            break;
        case '}':
            type = R_CURLY;
            break;
        case '(':
            type = L_ROUND;
            break;
        case ')':
            type = R_ROUND;
            break;
        case '[':
            type = L_SQUARE;
            break;
        case ']':
            type = R_SQUARE;
            break;
        default:
            continue;
        }


        if (type == L_CURLY || type == L_ROUND || type == L_SQUARE) {
            stack.push({ type, i });
        }
        else {

            if (stack.empty() || !isPair(stack.top().type, type)) {
                return false;
            }

            stack.pop();
        }
    }


    return stack.empty();
}
