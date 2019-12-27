#include <iostream>
#include <queue>

using namespace std;

class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node *next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node *_left, Node *_right, Node *_next)
            : val(_val), left(_left), right(_right), next(_next) {}
};

Node *connect(Node *root) {
    queue<Node *> q;
    if (root == nullptr)
        return root;
    q.push(root);
    while (!q.empty()) {
        int len = q.size();

        for (int i = 0; i < len; i++) {
            Node *tmp = q.front();
            q.pop();
            if (i != len - 1)
                tmp->next = q.front();
            if (tmp->left)
                q.push(tmp->left);
            if (tmp->right)
                q.push(tmp->right);
        }
    }
    return root;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
