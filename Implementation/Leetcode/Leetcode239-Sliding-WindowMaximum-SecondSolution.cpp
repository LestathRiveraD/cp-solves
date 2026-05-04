#include <bits/stdc++.h>

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> cur;
        vector<int> res;
        for (int i = 0; i < k; i++)
        {
            while ((!cur.empty()) && (nums[i] > nums[cur.back()]))
                cur.pop_back();
            cur.push_back(i); // 0 1 2
        }
        res.push_back(nums[cur.front()]); // 
        // 3   

        for (int i = k; i < nums.size(); i++)
        {
            while (!cur.empty() && nums[cur.back()] < nums[i])
                cur.pop_back();
            cur.push_back(i);
            while (!cur.empty() && (cur.front() <= i - k))
                cur.pop_front(); 
            res.push_back(nums[cur.front()]);
        }
        return res;
    }
};
