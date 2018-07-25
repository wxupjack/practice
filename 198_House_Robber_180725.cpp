class Solution {
public:
	int rob(vector<int>& nums) {
		int n = nums.size();
		if (n == 0) return 0;
		vector<int> dp(n, 0);
		dp[0] = nums[0]; if (n == 1) return dp[0];
		dp[1] = max(nums[0], nums[1]); if (n == 2) return dp[1];
		dp[2] = max(nums[0] + nums[2], nums[1]);
		for (int i = 3; i<n; i++) {
			dp[i] = max(dp[i - 2] + nums[i], dp[i - 3] + nums[i - 1]);
		}
		return dp[n - 1];
	}
};