#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *removeElements(ListNode *head, int val) {
    if (head == nullptr)
        return head;
    ListNode *pre = new ListNode(val - 1);
    pre->next = head;
    ListNode *ans = pre;
    ListNode *cur = head;
    while (cur) {
        cur->val == val ? (pre->next = cur->next) : (pre = cur);
        cur = cur->next;
    }
    return ans->next;
}

int main() {
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(2);
    ListNode *c = new ListNode(3);
    a->next = b;
    b->next = c;
    removeElements(a, 1);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
