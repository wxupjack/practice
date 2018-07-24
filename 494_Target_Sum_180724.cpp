class Solution {
public:
int findTargetSumWays(vector<int>& nums, int S) {

	int numOfAns = 0;
	int size = nums.size();
	vector<int> sign(size, 0);
	for (int i = 0; i < pow(2, size); i++) {
		uint32_t count = (uint32_t)i;

		for (int j = size - 1; j >= 0; j--) {
			(count % 2 == 1) ? sign[j] = 1 : sign[j] = -1;
			if (count != 0) count = count >> 1;
		}
		int sum = 0;
		for (int j = 0; j < size; j++) {
			sum += nums[j] * sign[j];
		}
		if (sum == S) numOfAns++;
	}

	return numOfAns;
}
};