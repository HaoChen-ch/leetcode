#include <iostream>

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *oddEvenList(ListNode *head) {
    if (head == nullptr || head->next == nullptr)
        return head;
    ListNode *o = head;
    ListNode *p = head->next;
    ListNode *e = p;
    while (o->next && e->next) {
        o->next = e->next;
        o = o->next;
        e->next = o->next;
        e = e->next;
    }
    o->next = p;
    return head;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
