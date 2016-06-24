/*
The MIT License (MIT)

Copyright (c) 2016 Northeastern University

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

    Status API Training Shop Blog About
*/

#include<stdlib.h>
#include <stdexcept>
#include "src/MergeSort.h"

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
  L = reinterpret_cast<int*>malloc(mid*sizeof(int));     // Creates leftside
  // subarray that is size of mid number of ints
  R = reinterpret_cast<int*>malloc((n-mid)*sizeof(int));  // Creates rightside
  // subarray that is size of the array (n) - mid ints
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
