class RandomizedSet {
    vector<int> v;
    unordered_map<int, int> map;
public:
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if (map.find(val) != map.end()) return false;
        map[val] = v.size();
        v.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if (map.find(val) == map.end()) return false;

        auto it = map.find(val);
        v[it->second] = v.back();
        v.pop_back();
        map[v[it->second]] = it->second;
        map.erase(val);
        return true;
    }
    
    int getRandom() {
        int r = rand() % v.size();
        return v[r];
    }
};

