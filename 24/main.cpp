#include <iostream>

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *swapPairs(ListNode *head) {
    if (head == nullptr || head->next == nullptr)
        return head;
    ListNode *cur = head;
    ListNode *next = head->next;
    cur->next = swapPairs(head->next->next);
    next->next = cur;
    return next;
}

int main() {
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(2);
    a->next = b;
    swapPairs(a);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
