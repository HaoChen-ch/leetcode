#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> res;
    for (int i = 1; i <= numRows; i++) {
        for (int j = 1; j <= i; j++) {
            vector<int> tmp;
            tmp.push_back(1);
        }

    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}