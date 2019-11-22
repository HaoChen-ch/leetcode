#include <iostream>
#include <vector>

using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> res;
    for (int i = 1; i < n + 1; i++) {
        bool d3 = i % 3 == 0;
        bool d5 = i % 5 == 0;
        if (d3 &&  d5) {
            res.emplace_back("FizzBuzz");
        } else if (d3) {
            res.emplace_back("Fizz");
        } else if (d5) {
            res.emplace_back("Buzz");
        } else {
            res.push_back(to_string(i));
        }
    }
    return res;
}

int main() {
    vector<string> res = fizzBuzz(3);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }
    return 0;
}