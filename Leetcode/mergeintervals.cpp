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
    