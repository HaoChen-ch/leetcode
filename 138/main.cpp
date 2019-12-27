#include <iostream>
#include <map>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val{};
    Node *next{};
    Node *random{};

    Node() = default;

    Node(int _val, Node *_next, Node *_random) {
        val = _val;
        next = _next;
        random = _random;
    }
};

Node *copyRandomList(Node *head) {
    if(head == nullptr)
        return nullptr;
    Node* cur = head;
    while (cur){
        Node* tmp = cur->next;
        cur->next = new Node(cur->val, tmp, nullptr);
        cur = tmp;
    }

    cur = head;
    while (cur) {
        if (cur->random)
            cur->next->random = cur->random->next;
        cur = cur->next->next;
    }

    cur = head;
    Node* copy_head = head->next;
    Node* copy_cur = head->next;
    while (copy_cur->next){
        cur->next = cur->next->next;
        cur = cur->next;
        copy_cur->next = copy_cur->next->next;
        copy_cur = copy_cur->next;
    }
    cur->next = nullptr;
    return copy_head;
}
Node *copyRandomList1(Node *head) {
    map<Node *, Node *> m;
    if (head == nullptr)
        return head;
    Node *cur = head;

    while (cur) {
        Node* copy = new Node(cur->val, nullptr, nullptr);
        m[cur] = copy;
        cur = cur->next;
    }
    cur = head;
    while (cur) {
        m[cur]->next = m[cur->next];
        m[cur]->random = m[cur->random];
        cur = cur->next;
    }
    return m[head];
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
