/* C++ program for Merge Sort */
#include <iostream>
using namespace std;

// Merges two sub-arrays of arr[].
// First sub-array is arr[l..m]
// Second sub-array is arr[m+1..r]
void Merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    /* create temp arrays */
    int L[n1], R[n2];

    /* copy data to temp arrays L[] and R[] */
    for(i=0; i<n1; ++i)
        L[i] = arr[left + i];
    for(j=0; j<n2; ++j)
        R[j] = arr[mid + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;      // Initial index of first sub-array
    j = 0;      // Initial index of second sub-array
    k = left;      // Initial index of merged sub-array
    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there are any */
    while(i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there are any */
    while(j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void MergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and r
        int m = l+(r-l)/2;

        // Sort first and second halves
        MergeSort(arr, l, m);
        MergeSort(arr, m+1, r);

        Merge(arr, l, m , r);
    }
}

/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << A[i] << " ";
    cout << endl;
}

/* Driver program to test above functions */
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, arr_size);

    MergeSort(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}
