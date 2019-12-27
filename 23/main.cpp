#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *mergeKLists(vector<ListNode *> &lists) {
    bool nu = true;
    for (auto & list : lists) {
        if (list != nullptr)
            nu = false;
    }
    if (nu)return nullptr;
    int min = INT_MAX, pos = 0;
    for (int i = 0; i < lists.size(); i++) {
        if (lists[i] != nullptr) {
            if (lists[i]->val < min) {
                pos = i;
                min = lists[i]->val;
            }
        }
    }
    auto ans = new ListNode(min);
    lists[pos] = lists[pos]->next;
    ans->next = mergeKLists(lists);
    return ans;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
