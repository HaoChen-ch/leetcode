#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int evalRPN(vector<string> &tokens) {
    stack<int> stk;
    int num1;
    int num2;
    for (int i = 0; i < tokens.size(); i++) {
        if (tokens[i] == "+") {
            num1 = stk.top();
            stk.pop();
            num2 = stk.top();
            stk.pop();
            stk.push(num1 + num2);

        } else if (tokens[i] == "-") {
            num1 = stk.top();
            stk.pop();
            num2 = stk.top();
            stk.pop();
            stk.push(-num1 + num2);
        } else if (tokens[i] == "*") {
            num1 = stk.top();
            stk.pop();
            num2 = stk.top();
            stk.pop();
            stk.push(num1 * num2);
        } else if (tokens[i] == "/") {
            num1 = stk.top();
            stk.pop();
            num2 = stk.top();
            stk.pop();
            stk.push(num2 / num1);
        } else {
            stk.push(atoi(tokens[i].c_str()));
        }
    }
    return stk.top();
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
