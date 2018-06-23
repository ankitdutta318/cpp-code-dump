#include <iostream>
using namespace std;

int main() {
    int n, max_val, max_pos;
    cin >> n;
    int arr[n], b[n];
    for(int i=0; i<n; ++i) {
        cin >> arr[i];
    }
    max_val = arr[0];
    for(int i=1; i<n; ++i) {
        if(arr[i] > max_val) {
            max_val = arr[i];
            max_pos = i;
        }
    }
    for(int i=0; i<n; ++i) {
            int next_max = max_val;
        for(int j=0; j<n; ++j) {
            if((arr[i]<arr[j]) && (arr[j] <= next_max))
                next_max = arr[j];
        }
        b[i] = next_max;
    }
    b[max_pos] = -1;
    cout << "New array: ";
    for(int i=0; i<n; ++i) {
        cout << b[i] << " ";
    }
    return 0;
}
