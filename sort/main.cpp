#include <iostream>
#include <vector>

using namespace std;

void bubble(vector<int> &nums) {
    for (int i = 0; i <nums.size()-1; i++) {
        for (int j = 0; j < nums.size()-1; j++) {
            if (nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);
        }
    }
}

int partition(vector<int> &nums, int begin, int end) {
    int base = nums[begin];
    while (begin < end) {
        while (begin < end && nums[end] >= base)
            end--;
        nums[begin] = nums[end];
        while (begin < end && nums[begin] <= base)
            begin++;
        nums[end] = nums[begin];
    }
    nums[begin] = base;
    return end;
}

void quitSort(vector<int> &nums, int begin, int end) {
    if (begin < end) {
        int pos = partition(nums, begin, end);
        quitSort(nums, begin, pos - 1);
        quitSort(nums, pos + 1, end);
    }


}

int main() {
    vector<int> a = {5, 6, 3, 2, 1};
    bubble(a);
    for (int i : a) {
        cout << i << endl;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
