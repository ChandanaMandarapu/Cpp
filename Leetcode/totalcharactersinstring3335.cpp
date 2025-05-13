// dsa question total characters in string after transformations I

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        const int MOD = 1e9 + 7;
        long long total = 0;

        for (char c : s) {
            int len = 1;
            for (int i = 0; i < t; ++i) {
                if (c == 'z') {
                    len *= 2;
                }
                if (c == 'z') c = 'a';
                else c = c + 1;
            }
            total = (total + len) % MOD;
        }

        return total;
    }
};

int main() {
    string s;
    int t;

    cout << "Enter the string: ";
    cin >> s;

    cout << "Enter number of transformations: ";
    cin >> t;

    Solution sol;
    int result = sol.lengthAfterTransformations(s, t);
    cout << "Length after " << t << " transformations: " << result << endl;

    return 0;
}
