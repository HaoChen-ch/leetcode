#include <iostream>

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *middleNode(ListNode *head) {
    bool go = false;
    ListNode *ans = head;
    while (head->next) {
        head = head->next;
        ans = go ? ans->next : ans;
        go = !go;
    }
    return ans;
}

int main() {
    std::cout << 5 / 2 << std::endl;
    return 0;
}
