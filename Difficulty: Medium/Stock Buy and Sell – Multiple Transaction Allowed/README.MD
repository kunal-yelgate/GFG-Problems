# Stock Buy and Sell – Multiple Transaction Allowed

**Solved**

- **Difficulty:** Medium
- **Accuracy:** 13.43%
- **Submissions:** 203K+
- **Points:** 4

## Problem Statement

Given an integer array `prices[]`, where `prices[i]` is the price of a given stock on the `i`th day. Each day you may decide to either buy or sell the stock at `price[i]`, you can even buy and sell the stock on the same day, return the maximum profit that you can get.

> **Note:** A stock can only be sold if it has been bought previously and multiple stocks cannot be held on any given day.

## Examples

### Example 1

**Input:**
```text
prices[] = [100, 180, 260, 310, 40, 535, 695]
```

**Output:**
```text
865
```

**Explanation:**

Buy the stock on day 0 and sell it on day 3 => `310 – 100 = 210`.

Buy the stock on day 4 and sell it on day 6 => `695 – 40 = 655`.

Maximum Profit = `210 + 655 = 865`.

### Example 2

**Input:**
```text
prices[] = [4, 2, 2, 2, 4]
```

**Output:**
```text
2
```

**Explanation:**

Buy the stock on day 3 and sell it on day 4 => `4 – 2 = 2`.

Maximum Profit = `2`.

## Constraints

- `1 ≤ prices.size() ≤ 10^5`
- `0 ≤ prices[i] ≤ 10^4`
