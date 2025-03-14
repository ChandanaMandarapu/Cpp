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


# Reverse Integer

### Problem Statement
Given a signed 32-bit integer `x`, return `x` with its digits reversed. If reversing `x` causes the value to go outside the signed 32-bit integer range, return `0`.

### Approach
1. Initialize `ans` as 0 to store the reversed number.
2. Extract the last digit of `x` using `x % 10` and update `x` by removing the last digit (`x /= 10`).
3. Check for overflow conditions: If `ans` exceeds `INT_MAX/10` or is smaller than `INT_MIN/10`, return `0`.
4. Multiply `ans` by 10 and add the extracted digit.
5. Repeat until `x` becomes 0.
6. Return `ans`.

### Code Explanation
```cpp
class Solution {
public:
    int reverse(int x) {
        int ans = 0, rem;
        while (x != 0) {
            rem = x % 10;
            x /= 10;
            if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
                return 0;
            ans = (ans * 10) + rem;
        }
        return ans;
    }
};
```

---

# Power of Two

### Problem Statement
Check whether a given integer `n` is a power of two.

### Approach
1. If `n` is less than 1, return `false`.
2. Keep dividing `n` by `2` until `n` becomes `1`.
3. If `n` is odd at any step, return `false`.
4. If `n` reaches `1`, return `true`.

### Code Explanation
```cpp
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n < 1)
            return false;
        while (n != 1) {
            if (n % 2 == 1)
                return false;
            n /= 2;
        }
        return true;
    }
};
```

---

# Palindrome Number

### Problem Statement
Check whether a given integer `x` is a palindrome.

### Approach
1. If `x` is negative, return `false` (negative numbers can't be palindromes).
2. Store `x` in `num` and initialize `ans` to 0 for storing the reversed number.
3. Extract digits from `num` one by one and build the reversed number.
4. If the reversed number equals `x`, return `true`, else return `false`.

### Code Explanation
```cpp
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        int num = x, rem, ans = 0;
        while (num) {
            rem = num % 10;
            num /= 10;
            if (ans > INT_MAX / 10)
                return false;
            ans = ans * 10 + rem;
        }
        return ans == x;
    }
};

---

# Ugly Number

## Problem Statement
An **Ugly Number** is a number that only has prime factors **2, 3, and 5**. Given an integer `n`, return `true` if it is an **Ugly Number**, otherwise return `false`.

### Examples
#### Example 1:
**Input:** `n = 6`
**Output:** `true`
**Explanation:** `6 = 2 × 3`, and only contains `2` and `3` as prime factors.

#### Example 2:
**Input:** `n = 14`
**Output:** `false`
**Explanation:** `14 = 2 × 7`, and `7` is not allowed.

---

## Approach
1. **Edge Case:** If `n <= 0`, return `false` (ugly numbers must be positive).
2. **Divide out factors of 2, 3, and 5:**
   - Keep dividing `n` by 2 while `n % 2 == 0`.
   - Keep dividing `n` by 3 while `n % 3 == 0`.
   - Keep dividing `n` by 5 while `n % 5 == 0`.
3. **Final Check:** If after all divisions `n` becomes `1`, return `true`. Otherwise, return `false`.

### Code (C++)
```cpp
class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;
        while (n % 2 == 0) n /= 2;
        while (n % 3 == 0) n /= 3;
        while (n % 5 == 0) n /= 5;
        return n == 1;
    }
};
```

---


# Power of Three

## Problem Statement
Given an integer `n`, return `true` if it is a **power of three**. Otherwise, return `false`.

### Examples
#### Example 1:
**Input:** `n = 27`
**Output:** `true`
**Explanation:** `27 = 3^3`.

#### Example 2:
**Input:** `n = 14`
**Output:** `false`
**Explanation:** `14` is not a power of three.

---

## Approach
1. **Edge Case:** If `n <= 0`, return `false`.
2. **Divide n by 3 repeatedly:**
   - While `n % 3 == 0`, divide `n` by 3.
3. **Final Check:** If `n` becomes `1`, return `true` (means `n` was a power of three), else return `false`.

### Code (C++)
```cpp
class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;
        while (n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
    }
};
```

---