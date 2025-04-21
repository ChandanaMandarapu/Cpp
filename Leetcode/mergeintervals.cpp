#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged;
        sort(intervals.begin(), intervals.end());
        int i = 0;
        while (i < intervals.size()) {
            if (merged.empty() || merged.back()[1] < intervals[i][0]) {
                merged.push_back(intervals[i]);
            } else {
                merged.back()[1] = max(merged.back()[1], intervals[i][1]);
            }
            i++;
        }
        return merged;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> result = solution.merge(intervals);

    for (const auto& interval : result) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    return 0;
}
