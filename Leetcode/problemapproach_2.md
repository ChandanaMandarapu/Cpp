# Happy Number
## Problem Statement
A **Happy Number** is a number that eventually reaches `1` when replaced by the sum of the squares of its digits. If it enters a loop, it is not happy.

### Examples
#### Example 1:
**Input:** `n = 19`
**Output:** `true`
**Explanation:**
```
19 → (1² + 9²) = 1 + 81 = 82
82 → (8² + 2²) = 64 + 4 = 68
68 → (6² + 8²) = 36 + 64 = 100
100 → (1² + 0² + 0²) = 1
```
Since we reached `1`, `19` is a happy number.

#### Example 2:
**Input:** `n = 2`
**Output:** `false`

---

## Approach
1. **Use a set to track seen numbers** to detect loops.
2. **Loop until `n` becomes `1` or we enter a cycle:**
   - Compute the sum of squares of digits.
   - If this sum was seen before, return `false` (cycle detected).
   - Otherwise, continue with the new number.
3. **Return `true` if we reach `1`**.

### Code (C++)
```cpp
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while (n != 1 && !seen.count(n)) {
            seen.insert(n);
            int sum = 0;
            while (n > 0) {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }
            n = sum;
        }
        return n == 1;
    }
};
