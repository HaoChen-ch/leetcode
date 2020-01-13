#include <iostream>

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *deleteDuplicates(ListNode *head) {
    if (head == nullptr || head->next == nullptr)
        return head;
    ListNode *ans = head;
    while (head && head->next) {
        ListNode *next = head->next;
        head->val == next->val ? (head->next = next->next) : (head = head->next);
    }
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
