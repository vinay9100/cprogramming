#include <stdio.h>
int main() {
  int arr[100], size, i, index, value;
  printf("Enter array size: ");
  scanf("%d", &size);
  printf("Enter array elements:\n");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }
  printf("Enter index to insert: ");
  scanf("%d", &index);
  printf("Enter value to insert: ");
  scanf("%d", &value);
  for (i = size; i >= index; i--) {
    arr[i] = arr[i-1];
  }
  arr[index] = value;
  size++;
  printf("Array after inserting element:\n");
  for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
