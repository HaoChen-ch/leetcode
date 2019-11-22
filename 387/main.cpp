#include <iostream>
#include <map>

using namespace std;

int firstUniqChar(string s) {
    int s1[26]={0};
    for (int i = 0; i < s.size(); i++) {
        s1[s[i]-'a']++;
    }
    for (int j = 0; j < s.size(); j++) {
        if(s1[s[j]-'a']==1)
            return j;
    }
    return -1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}