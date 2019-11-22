#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int maxProfit(vector<int> &prices) {
    int minprice = INT_MAX;
    int maxprofit = 0;
    for (int price : prices) {
        if (price < minprice)
            minprice = price;
        else if (price - minprice > maxprofit)
            maxprofit = price - minprice;
    }
    return maxprofit;
}
int maxProfit1(vector<int> &prices) {
    int len = prices.size();
    if (len == 0)
        return 0;
    int max = 0;
    for (int i = 0; i < prices.size(); i++) {
        for (int j = i + 1; j < prices.size(); j++) {
            if (prices[j] < prices[i]) {
                i = j-1;
                break;
            }
            if (prices[j] - prices[i] > max) {
                max = prices[j] - prices[i];
            }
        }
    }
    return max;
}

int main() {
    vector<int> a = {7, 1, 5, 3, 6, 4};
    vector<int> b = {10, 2, 9, 1, 2, 1,3,1};

    cout << maxProfit(b);
    return 0;
}