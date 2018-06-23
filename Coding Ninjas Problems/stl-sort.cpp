#include <iostream>
#include <algorithm>

using namespace std;

struct Interval {
	int st;
	int et;
};

bool Compare(Interval i1, Interval i2) {
	return abs(i1.st-i1.et) < abs(i2.st-i2.et);
}

int main() {

	Interval arr[] = {{6,4}, {3,4}, {4,6}, {8,13}};
	sort(arr, arr+4, Compare);

	for(int i=0; i<4; ++i) {
		cout << arr[i].st << " : " << arr[i].et << endl;
	}
	return 0;
}