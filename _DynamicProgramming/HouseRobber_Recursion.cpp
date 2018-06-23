#include <bits/stdc++.h>

using namespace std;

int Rob(int i, std::vector<int>& nums) {
	if(i == 0)	return nums[0];
	int max_val = -1;
	max_val = max(max_val, Rob(i-1, nums));

	for (int j = i-2; j >= 0; --j)
	{
		max_val = max(max_val, Rob(j, nums) + nums[i-1]);
	}
	return max_val;
}

int main() {
	std::vector<int> nums{1, 2, 3, 4, 5};
	cout << Rob(5, nums);
}