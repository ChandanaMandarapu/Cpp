#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);
        for (int d : digits) freq[d]++;

        vector<int> ans;

        for (int i = 100; i <= 998; i += 2) {
            int a = i / 100;
            int b = (i / 10) % 10;
            int c = i % 10;

            vector<int> tempFreq(10, 0);
            tempFreq[a]++;
            tempFreq[b]++;
            tempFreq[c]++;

            bool ok = true;
            for (int d = 0; d < 10; d++) {
                if (tempFreq[d] > freq[d]) {
                    ok = false;
                    break;
                }
            }

            if (ok) ans.push_back(i);
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Example test input
    vector<int> digits = {2, 1, 3, 0};

    // Call the function
    vector<int> result = sol.findEvenNumbers(digits);

    // Output result
    cout << "Even numbers formed are: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
