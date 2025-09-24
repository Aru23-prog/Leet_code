class Solution {
public:
    
    vector<string> split(const string& s, char delimiter) {
        vector<string> result;
        string item;
        stringstream ss(s);
        while (getline(ss, item, delimiter)) {
            result.push_back(item);
        }
        return result;
    }

    int compareVersion(string version1, string version2) {
        vector<string> parts1 = split(version1, '.');
        vector<string> parts2 = split(version2, '.');

        int n = max(parts1.size(), parts2.size());
        for (int i = 0; i < n; i++) {
            int a = (i < parts1.size()) ? stoi(parts1[i]) : 0;
            int b = (i < parts2.size()) ? stoi(parts2[i]) : 0;

            if (a > b) return 1;
            if (a < b) return -1;
            // if equal → continue
        }
        return 0;
    }
};
