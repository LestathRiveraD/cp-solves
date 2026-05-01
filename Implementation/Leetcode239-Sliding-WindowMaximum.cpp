class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
	// 1. Pre process array
	// constructing a sparse table works here because:
	// queries on a static array with idemponent and associative operation
        int p; // p = biggest power of 2 that fits into k
        int n = nums.size();
        vector<int> res;
        for (int i = 0; i < 31; i++)
            if (k & (1 << i))
                p = i + 1;
        vector<vector<int>> sparse(p, vector<int>());

        for (int i = 0; i < n; i++)
            sparse[0].push_back(nums[i]);
        for (int i = 1; i < p; i++)
            for (int j = 0; j < (n - (1 << i) + 1); j++)
                sparse[i].push_back(max(sparse[i - 1][j], sparse[i - 1][j + (1 << (i - 1))]));
        
        for (int i = 0; i <= n - k; i++)
            res.push_back(max(sparse[p - 1][i], sparse[p - 1][i + (k - (1 << (p - 1)))]));
        return res;
    }
};
