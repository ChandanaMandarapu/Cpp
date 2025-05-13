#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] % 2 == 1) {
                count++;
                if (count == 3) return true;
            } else {
                count = 0;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;

    // Example test input
    vector<int> arr = {1, 2, 34, 3, 4, 5, 7, 23, 12};

    // Call the function
    bool result = sol.threeConsecutiveOdds(arr);

    // Output result
    cout << (result ? "true" : "false") << endl;

    return 0;
}
