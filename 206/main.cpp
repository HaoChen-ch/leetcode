#include <iostream>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *reverseList(ListNode *head) {
    if (head == nullptr)
        return nullptr;
    ListNode *cur = head;
    ListNode *next = nullptr;
    ListNode *pre = nullptr;
    while (cur != nullptr) {
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    return pre;
}

int main() {
    ListNode a1(1);
    ListNode a2(2);
    ListNode a3(3);
    a1.next = &a2;
    a2.next = &a3;
    ListNode *res = reverseList(&a1);
    std::cout << res->next->val << std::endl;
    return 0;
}