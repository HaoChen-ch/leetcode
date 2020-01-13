#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

TreeNode *sortedListToBST(ListNode *head) {
    if (head == nullptr) return nullptr;
    if (head->next == nullptr) return new TreeNode(head->val);
    ListNode *start = new ListNode(0);
    start->next = head;
    ListNode *fast = start, *slow = start, *slow_pre = nullptr;
    while (fast && fast->next) {
        fast = fast->next->next;
        slow_pre = slow;
        slow = slow->next;
    }
    TreeNode *root = new TreeNode(slow->val);
    slow_pre->next = nullptr;
    root->left = sortedListToBST(start->next);
    root->right = sortedListToBST(slow->next);
    return root;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
