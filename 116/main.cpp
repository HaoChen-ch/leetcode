#include <iostream>

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
    if (root == nullptr)
        return root;
    Node * left = root->left;
    Node * right = root->right;
    while (left->right){
        left = left->right;
    }
    while (right->left){
        right = right->left;
    }
    left->next = right;
    connect(root->left);
    connect(root->right);
    return root;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
