bool solve(string s, string t) {
    int n = s.size();
    map<char, int> mp;
    for (auto i : s) mp[i]++;

    for (auto i : t) {
        mp[i]++;
    }

    for (auto i : mp) {
        
        if (i.second % 2 != 0) return false;
    }

    return true;
}
