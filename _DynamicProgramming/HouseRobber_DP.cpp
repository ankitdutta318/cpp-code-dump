#include<iostream>
#include<vector>

using namespace std;

int Rob(int n, vector<int>& nums) {
    vector<int> R(n);
    R[0] = nums[0];
    R[1] = nums[1];
    for(int i=2; i<n; ++i) {
        R[i] = R[i-1];
        //for(int j=i-2; j>=0; --j) {
          //  R[i] = max(R[i], R[j] + nums[i]);
        //}
        R[i] = max(R[i-1], nums[i] + R[i-2]);
    }

    return R[n-1];
}

int main() {
    vector<int> nums {1, 2, 3, 4, 5};
    cout << Rob(5, nums) << endl;
    return 0;
}
