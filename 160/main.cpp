#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *getIntersectionNode1(ListNode *headA, ListNode *headB) {
    int len1 = 0, len2 = 0;
    ListNode *p1 = headA;
    ListNode *p2 = headB;
    while (headA) {
        len1++;
        headA = headA->next;
    }
    while (headB) {
        len2++;
        headB = headB->next;
    }
    int n = abs(len1 - len2);
    if (len1 > len2)
        while (n--)
            p1 = p1->next;
    else
        while (n--)
            p2 = p2->next;
    while (p1 != nullptr && p2 != nullptr) {
        if (p1 == p2)
            return p1;
        p1 = p1->next;
        p2 = p2->next;
    }
    return nullptr;
}

ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
    if (headA == nullptr || headB == nullptr)
        return nullptr;
    ListNode* pA = headA, *pB = headB;
    while (pA != pB) {
        pA = pA == nullptr ? headB : pA->next;
        pB = pB == nullptr ? headA : pB->next;
    }
    return pA;
}

int main() {
    ListNode a1(1);
    ListNode a2(2);
    ListNode a3(3);
    ListNode a4(4);
    ListNode a5(5);
    a1.next = &a2;
    a2.next = &a3;
    a4.next =&a5;
    std::cout << getIntersectionNode(&a1,&a4)<< std::endl;
    return 0;
}