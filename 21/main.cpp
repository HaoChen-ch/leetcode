#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};


ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    ListNode *p;
    if (l1 == nullptr)
        return l2;
    if (l2 == nullptr)
        return l1;
    if (l1->val > l2->val) {
        p = l2;
        p->next = mergeTwoLists(l1, l2->next);
    } else {
        p = l1;
        p->next = mergeTwoLists(l1->next, l2);
    }
    return p;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}