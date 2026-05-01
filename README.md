# Ideas

#### Codeforces: [lestat04](https://codeforces.com/profile/lestat04)
#### Leetcode: [LestathRiveraD](https://leetcode.com/u/LestathRiveraD/)

1. Ask yourself how to solve the problem for some sub-problems in terms of the previous one. (Div. 2 1089/B)

2. GCD(array) = GCD(arr[1, k], arr[k + 1, n]) = GCD(all adjacent pairs) (Div. 2 1089/C)
    2.1. GCD is associative => use to remove ranges or elements in O(1)

3. GCD(a, b) = GCD(LCM(a, b), b) (Div. 2 1089/C)
    3.1 Just memorize this

4. For scheduling problems with multiples/divisibility overlaps, consider using Inclusion-exclusion with LCMs (Educational 188/ C)

5. Sliding window with conditional inner loop and early breaks usually runs in amoritzed O(n), not O(n^2) (Div. 2 1093/B)

6. When unsure about a geedy strategy, try adversarial reasoning to justify it (Div. 2 1093/B)

7. Sparse table data structure pre computes in O(n log n) with O(1) queries when querying idempotent, associative operations on a static array (Leetcode 239 / Sliding Window Maximum) (CSES 1647 Min queries)
