#include <iostream>
#include <vector>

using namespace std;

void setZeroes(vector<vector<int>> &matrix) {
    bool a[matrix.size()][matrix[0].size()];
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] == 0) {
                for (int l = 0; l < matrix.size(); l++) {
                    a[l][j] = true;
                }
                for (int k = 0; k < matrix[i].size(); k++) {
                    a[i][k] = true;
                }

            }
        }
    }

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (a[i][j]) {
                matrix[i][j] = 0;
            }
        }

    }

}

int main() {
    bool a[2][2] = {false};
    if (!a[0][0])
        cout << "yes" << endl;
    std::cout << a[0][0] << std::endl;
    return 0;
}
