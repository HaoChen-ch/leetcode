#include <iostream>
#include <stack>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};
bool isPalindrome(ListNode *head) {
    ListNode *p = head;
    int len = 0;
    while (head){
        head = head->next;
        len++;
    }
    while (p){

    }
}
bool isPalindrome1(ListNode *head) {

    stack<ListNode *> s;
    ListNode *p = head;
    while (head) {
        s.push(head);
        head = head->next;
    }
    while (p) {
        if (p->val != s.top()->val)
            return false;
        p = p->next;
        s.pop();
    }
    return true;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}