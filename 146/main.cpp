#include <iostream>
#include <map>
#include <vector>
#include <list>

using namespace std;

class LRUCache {
public:
    LRUCache(int capacity) : capacity_(capacity) {}

    int get(int key) {
        if (hash_.find(key) == hash_.end())
            return -1;
        else {
            int value = hash_[key]->second;
            ls_.erase(hash_[key]);
            ls_.push_front(make_pair(key, value));
            hash_[key] = ls_.begin();
            return value;
        }
    }

    void put(int key, int value) {
        if (hash_.find(key) != hash_.end())
            ls_.erase(hash_[key]);
        else if (ls_.size() >= capacity_) {
            hash_.erase(ls_.back().first);
            ls_.pop_back();
        }
        ls_.push_front(make_pair(key, value));
        hash_[key] = ls_.begin();
    }

private:
    int capacity_;
    list<pair<int, int>> ls_;
    map<int, list<pair<int, int>>::iterator> hash_;
};

int main() {
    LRUCache *cache = new LRUCache(2 /* 缓存容量 */ );

    cache->put(1, 1);
    cache->put(2, 2);
    cout << cache->get(1);       // 返回  1
    cache->put(3, 3);    // 该操作会使得密钥 2 作废
    cout << cache->get(2);       // 返回 -1 (未找到)

    return 0;
}
