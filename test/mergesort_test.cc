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
