#include <bits/stdc++.h>

using namespace std;

int Revenue(int n, vector<int>& prices) {
	if(n == 0)	return 0;
	int max_val = -1;

	for (int i = 0; i < n; ++i)
	{
		int temp = prices[n-i-1] + Revenue(i, prices);
		if(temp > max_val)
			max_val = temp;
	}

	return max_val;
}

int main() {

	std::vector<int> prices {1, 5, 8, 9, 10};
	cout << Revenue(5, prices) << endl;
	return 0;
}