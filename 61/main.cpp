#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *rotateRight(ListNode *head, int k) {
    if (head == nullptr) return head;
    int N = 1;
    ListNode *tail = head;
    while (tail->next) {
        tail = tail->next;
        N++;
    }
    tail->next = head;
    k = N - k % N;
    while (k - 1) {
        head = head->next;
        k--;
    }
    tail = head;
    head = head->next;
    tail->next = nullptr;
    return head;
}




int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
