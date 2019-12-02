#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Node {
public:
    int fre;
    int val;
    Node(int val,int fre){
        this->fre=fre;
        this->val = val;
    }
};

bool cmp(Node node1, Node node2) {
    return node1.fre > node2.fre;
}

vector<int> topKFrequent(vector<int> &nums, int k) {
    vector<int> ans;
    vector<Node> v;
    for (int num:nums) {
        if(v.)
        Node* tmp = new Node(num,1);

    }

//    for (int i = 0; i < k; i++) {
//        ans.push_back(map[i]);
//    }
    return ans;
}

int main() {
    vector<int> a = {1, 1, 1, 2, 2, 3};
    vector<int> b = topKFrequent(a, 2);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}