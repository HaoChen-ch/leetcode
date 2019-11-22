#include <iostream>
#include <vector>

using namespace std;
int singleNumber(vector<int>& nums) {
    int res=0;
    for(int a :nums){
        res = res^a;
    }
    return res;

}
int main() {
    vector<int> a = {1,2,3,4,5} ;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}