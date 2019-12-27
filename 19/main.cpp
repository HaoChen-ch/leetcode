#include <iostream>


struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *removeNthFromEnd(ListNode *head, int n) {
    auto* dummy = new ListNode(0);
    dummy->next = head;
    ListNode *cur = dummy;

    while (n--) {
        head = head->next;
    }
    while (head) {
        head = head->next;
        cur = cur->next;
    }
    cur->next = cur->next->next;
    return dummy->next;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
