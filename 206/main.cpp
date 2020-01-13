#include <iostream>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *reverseList(ListNode *head) {
    if(head ==nullptr)
        return head;
    ListNode *pre = new ListNode(0);
    pre->next = head;
    while(head->next){
        ListNode *next = head->next;
        head->next = next->next;
        next->next = pre->next;
        pre->next = next;
    }
    return pre->next;
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