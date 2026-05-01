# Ideas

1. Ask yourself how to solve the problem for some sub-problems in terms of the previous one. (Div. 2 1089/B)

2. GCD(array) = GCD(all adjacent pairs) = GCD(some subarray, another subarray) (Div. 2 1089/C)

3. GCD(a, b) = GCD(LCM(a, b), b) (Div. 2 1089/C)

4. For scheduling problems with multiples/divisibility overlaps, consider using Inclusion-exclusion with LCMs (Educational 188/ C)

5. Sliding window with conditional inner loop and early breaks usually runs in amoritzed O(n), not O(n^2) (Div. 2 1093/B)

6. When unsure about a geedy strategy, try adversarial reasoning to justify it (Div. 2 1093/B)

7. Sparse table data structure is optimal when querying idempotent, associative operations on a static array (Leetcode 239 / Sliding Window Maximum) (CSES 1647 Min queries)
