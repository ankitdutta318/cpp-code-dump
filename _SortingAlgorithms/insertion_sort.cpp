/* C++ program for Insertion Sort */
#include <iostream>
using namespace std;

void InsertionSort(int A[], int n) {
    for(int i=1; i<n; ++i) {
        int value = A[i];
        int hole = i;
        while(hole > 0 && A[hole-1] > value) {
            A[hole] = A[hole-1];
            hole--;
        }
        A[hole] = value;
    }
}

int main() {
    int A[] = {2, 7, 4, 1, 5, 3};
    InsertionSort(A, 6);
    cout << "Array after sorting: ";
    for(int i=0; i<6; ++i) {
        cout << A[i] << " ";
    }
}
