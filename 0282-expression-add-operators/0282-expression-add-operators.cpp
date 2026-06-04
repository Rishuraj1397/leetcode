class Solution {
public:
    vector<string> addOperators(string num, int target) {
        vector<string> result;
        if (num.empty()) return result;
        dfs(num, target, 0, 0, 0, "", result);
        return result;
    }

private:
    void dfs(const string& num, int target, int pos, long long curr, long long prev, const string& expr, vector<string>& result) {
        int n = num.size();
        if (pos == n) {
            if (curr == target) {
                result.push_back(expr);
            }
            return;
        }

        for (int i = pos; i < n; ++i) {
            if (i > pos && num[pos] == '0') break;

            string sub = num.substr(pos, i - pos + 1);
            long long val = stoll(sub);

            if (pos == 0) {
                dfs(num, target, i + 1, val, val, sub, result);
            } else {
                dfs(num, target, i + 1, curr + val, val, expr + "+" + sub, result);
                dfs(num, target, i + 1, curr - val, -val, expr + "-" + sub, result);
                dfs(num, target, i + 1, curr - prev + prev * val, prev * val, expr + "*" + sub, result);
            }
        }
    }
};