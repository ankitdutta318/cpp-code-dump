#include <bits/stdc++.h>

using namespace std;

int stairs(int n) {
	int* S = new int [n+1];
	S[1] = 1;
	S[2] = 2;
	for (int i = 3; i <= n; ++i)
	{
		S[i] = S[i-1] + S[i-2];
	}

	return S[n];
}

int main() {

	cout << stairs(45) << endl;
	return 0;
}