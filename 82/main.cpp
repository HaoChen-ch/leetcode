#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *deleteDuplicates(ListNode *head) {
    ListNode *p = new ListNode(0);
    p->next = head;
    head = p;
    ListNode *left, *right;
    while (p->next) {
        left = p->next;
        right = left;
        while (right->next && right->next->val == left->val)
            right = right->next;
        left == right ? (p = p->next) : (p->next = right->next);
    }
    return head->next;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
