// Actual merge sort file stolen by: Tory Leo
#include<stdlib.h>
#include <stdexcept>
#include "MergeSort.h"

// Function that that fuses L and R into array A
// leftCount = number of elements in L
// rightCount = number of elements in R
void Merge(int *A, int *L, int leftCount, int *R, int rightCount) {
  int i, j, k;
  i = 0; j = 0; k = 0;
  // i - index of left array (L)
  // j - index of right array (R)
  // k - index of merged array (A)

  while (i < leftCount && j < rightCount) {
    if (L[i] < R[j]) {
      A[k++] = L[i++];
    } else {
      A[k++] = R[j++];
    }
  }
  while (i < leftCount) {
    A[k++] = L[i++];
  }
  while (j < rightCount) {
    A[k++] = R[j++];
  }
}

// Gets called recursively to sort an array of ints
void MergeSort(int *A, int n) {
  int mid, i, *L, *R;
  mid = n/2;        // Finds the middle index of the array
  L = (int*)malloc(mid*sizeof(int));     // Creates leftside subarray that is
  // size of mid number of ints
  R = (int*)malloc((n-mid)*sizeof(int));  // Creates rightside subarray that is
  // size of the array (n) - mid ints
  if (n < 1) {
    throw std::invalid_argument("ERROR: ARRAY IS EMPTY!");
  }
  if (n < 2) return;  // Base case for when the array has less than 2 elements

  for (i = 0; i < mid; ++i) {
    L[i] = A[i];   // Creates left subarray by iterating through the first half
    // of the original array
  }
  for (i = mid; i < n; ++i) {
    R[i - mid] = A[i];  // Creates right subarray by iterating through the right
    // half of the original array
  }

  MergeSort(L, mid);       // Sorts the left array (recursively)
  MergeSort(R, n-mid);     // Sorts the right array (also recursively)
  Merge(A, L, mid, R, n-mid);  // Merges L and R into A as a sorted list
  free(L);
  free(R);
}
