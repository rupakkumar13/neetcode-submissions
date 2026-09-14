class MyHashSet {
private:
    int bucketSize;
    vector<vector<int>> buckets;

public:
    MyHashSet() {
        bucketSize = 1000;
        buckets.resize(bucketSize);
    }

    int hash(int key) {
        return key % bucketSize;
    }

    void add(int key) {
        int index = hash(key);

        for (int x : buckets[index]) {
            if (x == key) return;
        }

        buckets[index].push_back(key);
    }

    void remove(int key) {
        int index = hash(key);

        auto &bucket = buckets[index];

        for (auto it = bucket.begin(); it != bucket.end(); it++) {
            if (*it == key) {
                bucket.erase(it);
                return;
            }
        }
    }

    bool contains(int key) {
        int index = hash(key);

        for (int x : buckets[index]) {
            if (x == key) return true;
        }

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */