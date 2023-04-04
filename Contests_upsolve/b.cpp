 

   int maximumCostSubstring(string s, string chars, vector<int>& vals) {
         unordered_map<char, int> char_values;
    for (int i = 0; i < chars.size(); i++) {
        char_values[chars[i]] = vals[i];
    }
    int max_cost = 0;
    int current_cost = 0;
    for (char c : s) {
        if (char_values.find(c) != char_values.end()) {
            current_cost += char_values[c];
        } else {
            current_cost += c - 'a' + 1;
        }
        max_cost = max(max_cost, current_cost);
        if (current_cost < 0) {
            current_cost = 0;
        }
    }
    return max_cost;




    nt x = gcd(arr.size(), k);
        ll res = 0;
        REP(i,x){
            vi t;
            for(int j=i;j<arr.size();j+=x)t.pb(arr[j]);
            SORT(t);
            int v = t[t.size()/2];
            REP(j,t.size())res+=abs(t[j]-v);
        }
        return res;
    }