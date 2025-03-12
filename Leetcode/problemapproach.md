# Add Digits - Solution Breakdown

## Problem Statement
Given an integer `num`, repeatedly add its digits until the result is a single digit.

## Approach Used
We use a **loop-based approach** where we repeatedly sum the digits of `num` until it becomes a single digit.

## Logic Breakdown
1. **Outer Loop:** Runs while `num` is greater than 9 (i.e., more than one digit).
2. **Inner Loop:** Extracts each digit from `num`, sums them up, and updates `num`.
3. **Update Step:** The sum (`ans`) is assigned back to `num`, repeating the process.

## Code Explanation
```cpp
class Solution {
public:
    int addDigits(int num) {
        while (num > 9) {  // Continue until num is a single digit
            int ans = 0, rem;
            while (num != 0) {  // Extract digits and sum them
                rem = num % 10;  // Get last digit
                num /= 10;       // Remove last digit
                ans += rem;       // Add digit to sum
            }
            num = ans;  // Update num with the new sum
        }
        return num;  // Return final single-digit result
    }
};
```

## Behind the Scenes
1. `num % 10` extracts the last digit.
2. `num /= 10` removes the last digit.
3. The inner loop runs until all digits are summed.
4. The outer loop ensures the process repeats until `num` is a single digit.

## Example Walkthrough
**Input:** `num = 38`
- `3 + 8 = 11` → `1 + 1 = 2`
- Output: `2`

## Complexity Analysis
- **Time Complexity:** `O(log n)` (since digits reduce logarithmically)
- **Space Complexity:** `O(1)` (only a few variables are used)
