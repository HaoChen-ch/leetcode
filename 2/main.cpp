#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    int flag = 0;
    auto *ans = new ListNode(0);
    auto cur = ans;
    while (l1 || l2) {
        int l1value, l2value;
        l1value = l1 ? l1->val : 0;
        l2value = l2 ? l2->val : 0;
        int val = (l1value + l2value + flag) % 10;
        flag = (l1value + l2value + flag) / 10;
        auto *tmp = new ListNode(val);
        cur->next = tmp;
        cur = cur->next;
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }
    if (flag) {
        auto *tmp = new ListNode(1);
        cur->next = tmp;
    }
    return ans->next;
}

int main() {

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
