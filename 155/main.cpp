#include <iostream>
#include <stack>
#include <climits>

using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    stack<pair<int, int>> stk;

    int m;

    MinStack() {
    }

    void push(int x) {
        m = stk.size() == 0 ? INT_MAX : top();
        m = min(m, x);
        stk.push(make_pair(x, m));

    }

    void pop() {
        stk.pop();
    }

    int top() {
        return stk.top().first;
    }

    int getMin() {
        return stk.top().second;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
