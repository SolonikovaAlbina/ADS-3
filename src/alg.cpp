// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int right = 0, left = size - 1, sum = 0;
  while (right < left) {
    int middle = (right + left) / 2;
    if (arr[middle] < value)
      right = middle + 1;
    else
      left = middle;
  }
  if (arr[right] == value) {
    while (arr[right] == value) {
      sum++;
      right++;
    }
  }
  if (sum != 0)
    return sum;
  else
    return 0; // если ничего не найдено
}
