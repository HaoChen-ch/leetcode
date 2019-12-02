#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *detectCycle(ListNode *head) {
    if (head == nullptr || head->next == nullptr||head->next->next== nullptr)
        return nullptr;
    ListNode *fast = head->next->next;
    ListNode *slow = head->next;
    while (fast != slow) {
        if (fast->next == nullptr || fast->next->next == nullptr)
            return nullptr;
        fast = fast->next->next;
        slow = slow->next;
    }
//    slow = slow->next;
    ListNode *p = head;
    while (p != slow) {
        p = p->next;
        slow = slow->next;
    }
    return p;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}