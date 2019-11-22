#include <iostream>
#include <vector>
#include <algorithm>

using  namespace std;
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> res ;
    sort(nums.begin(),nums.end());
    res.push_back(nums);
    while (next_permutation(nums.begin(),nums.end())){
        res.push_back(nums);
    }
    return res;
}
int main() {
    vector<int> a ={1,2,3};
    next_permutation(a.begin(),a.end());
    for (int i = 0; i < a.size(); i++) {
        cout<<a[i]<<endl;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}