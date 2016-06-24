/*The MIT License (MIT)

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


#include "gtest/gtest.h"
#include "../src/MergeSort.h"

TEST(MergeSortTest, test_1) {
  bool are_equal = true;
  int n = 1;
  int Foo[1] = {0};
  int Bar[1] = {0};
  MergeSort(Foo, n);
  for (int i = 0; i < n; ++i) {
    if (Foo[i] != Bar[i]) {
      are_equal = false;
    }
  }
  ASSERT_TRUE(are_equal);
}

TEST(MergeSortTest, test_2) {
  bool are_equal = true;
  int n = 9;
  int Foo[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
  int Bar[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  MergeSort(Foo, n);
  for (int i = 0; i < n; ++i) {
    if (Foo[i] != Bar[i]) {
      are_equal = false;
    }
  }
  ASSERT_TRUE(are_equal);
}

TEST(MergeSortTest, test_3) {
  bool are_equal = true;
  int n = 6;
  int Foo[6] = {8, 8, 8, 8, 8, 8};
  int Bar[6] = {8, 8, 8, 8, 8, 8};
  MergeSort(Foo, n);
  for (int i = 0; i < n; ++i) {
    if (Foo[i] != Bar[i]) {
      are_equal = false;
    }
  }
  ASSERT_TRUE(are_equal);
}

TEST(MergeSortTest, test_4) {
  int n = 0;
  int Foo[0] = {};
  ASSERT_ANY_THROW(MergeSort(Foo, n));
}
