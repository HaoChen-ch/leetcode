#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int> &nums) {
    vector<int> res(nums.size());
    int k = 1;
    for(int i = 0; i < res.size(); i++){
        res[i] = k;
        k = k * nums[i];
    }
    k = 1;
    for(int i = res.size() - 1; i >= 0; i--){
        res[i] *= k;
        k *= nums[i];
    }
    return res;
}

int main() {
    vector<int>  a ={1,2,3,4};
    vector<int> b = productExceptSelf(a);
    for (int i = 0; i < b.size() ; i++) {
        cout<<b[i]<<endl;
    }
    return 0;
}