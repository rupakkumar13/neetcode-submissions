class MyHashMap {
public:
int m;
vector<list<pair<int, int>>>bucket;
    MyHashMap() {
       m = 15000;
       bucket = vector<list<pair<int, int>>>(m, list<pair<int, int>>{}); 
    }
    int getIndex(int key){
        return key % m;
    }
    void put(int key, int value) {
        int index = getIndex(key);
        for(auto &it : bucket[index]){
            if(it.first == key){
                it.second = value;
                return;
            }
        }
        bucket[index].push_back({key, value});
    }
    
    int get(int key) {
        int index = getIndex(key);
        for(auto it : bucket[index]){
            if(it.first == key){
                return it.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int index = getIndex(key);
        for(auto it = bucket[index].begin(); it != bucket[index].end(); it++){
            if(it->first == key){
                bucket[index].erase(it);
                return;
            }
        }
        return;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */