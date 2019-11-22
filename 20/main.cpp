#include <iostream>
#include <stack>


using namespace std;

bool valid(char i, char i1) {
    return (i == '(' && i1 == ')') || (i == '[' && i1 == ']') || (i == '{' && i1 == '}');
}

bool isValid(string s) {
    stack<char> res;
    for (char i : s) {
        if (i == '(' || i == '{' || i == '[') {
            res.push(i);
        } else {
            if(res.empty())
                return false;
            if (!valid(res.top(), i))
                return false;
            else
                res.pop();
        }
    }
    return res.empty();
}


int main() {
    std::cout << isValid("[") << std::endl;
    return 0;
}