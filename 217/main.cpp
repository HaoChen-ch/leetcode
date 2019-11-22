#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;
bool containsDuplicate(vector<int> &nums) {
   map<int, int> a ;
   for(int num:nums){
       if(a[num]!=0)
           return true;
       a[num]++;
   }
    return false;
}

bool containsDuplicate1(vector<int> &nums) {
    set<int> s;
    for (int num :nums) {
        bool res = s.find(num) != s.end();
        if (res)
            return true;
        s.insert(num);
    }
    return false;
}

int main() {
   vector<int > a = {1,2,3,4};
    std::cout << containsDuplicate(a) << std::endl;
    return 0;
}