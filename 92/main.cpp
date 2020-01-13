#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *reverseBetween(ListNode *head, int m, int n) {
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *pre = dummy;
    for(int i = 1; i < m; i++){
        pre = pre->next;
    }
    head = pre->next;
    for(int i = m; i < n; i++){
        ListNode *next = head->next;
        head->next = next->next;
        next->next = pre->next;
        pre->next = next;
    }
    return dummy->next;
}

int main() {
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(2);
    ListNode *c = new ListNode(3);
    ListNode *d = new ListNode(4);
    ListNode *e = new ListNode(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    reverseBetween(a, 2, 4);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
