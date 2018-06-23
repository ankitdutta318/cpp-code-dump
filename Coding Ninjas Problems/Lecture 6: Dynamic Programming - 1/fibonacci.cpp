#include <iostream>

using namespace std;

int fib(int n) {
	if(n == 0 || n == 1)	return 1;

	return fib(n-1) + fib(n-2);
}

long int fibRecurDP(int n, long int * arr) {
	if(n == 0 || n == 1) return 1;

	if (arr[n] > 0)		
		return arr[n];

	long int output = fibRecurDP(n-1, arr) + fibRecurDP(n-2, arr);
	arr[n] = output;
	return output;
}

long int fibIterDP(int n) {
	long int* arr = new long int[n + 1];
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		arr[i] = arr[i-1] + arr[i-2];
	}
	long int output = arr[n];
	delete [] arr;
	return output;
}

int main() {
	int n;
	cin >> n;
	// cout << "Fib recursive solution: " << fib(n) << endl;
	long int* arr = new long int[n+1];
	cout << "Fib recursive solution w/ DP: " << fibRecurDP(n, arr) << endl;
	delete [] arr;
	cout << "Fib iterative solution w/ DP: " << fibIterDP(n) << endl;
	return 0;
}