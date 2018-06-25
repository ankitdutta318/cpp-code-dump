/* C++ program for Bubble Sort */
#include <iostream>
using namespace std;

void BubbleSort(int A[], int n) {
    for(int i=0; i<n; ++i) {
        int flag = 0;
        for(int j=0; j<n-i-1; ++j) {
            if(A[j] > A[j+1]) {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0) break;
    }
}

int main() {
    int A[] = {2, 7, 4, 1, 5, 3};
    BubbleSort(A, 6);
    cout << "Array after sorting: ";
    for(int i=0; i<6; ++i) {
        cout << A[i] << " ";
    }
}
