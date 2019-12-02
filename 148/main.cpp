#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}

};

ListNode* sortList(ListNode* head) {
    vector<int> tmp ;
    ListNode *first = head;
    ListNode *res = head;
    while (head){
        tmp.push_back(head->val);
        head = head->next;
    }
    sort(tmp.begin(),tmp.end());
    for (int i = 0; i < tmp.size(); i++) {
        first->val = tmp[i];
        first = first->next;
    }
    return res ;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}