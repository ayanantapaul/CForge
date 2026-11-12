/* -- Bubble Sort -- */

/* NOTE: 
 * If you want to sort the array in descending order 
 * then just change the '>' with '<' in line 13
 * */

#include <stdio.h>

void bubble_sort(int arr[], int arr_len) {
	for (int i = 0; i < arr_len; i++) {
		for (int j = 0; j < (arr_len - 1); j++) {
			if (arr[j] > arr[j+1]) {
				/* swap elements */
				arr[j] = arr[j] + arr[j+1];
				arr[j+1] = arr[j] - arr[j+1];
				arr[j] = arr[j] - arr[j+1];
			}
		}
	}
}

int main(void) {
	
	int numbers[] = {3, 1, 8, 5, 2, 9, 4, 10, 7, 6};
	int length = 10;

	printf("Before sorting: ");
	for (int x = 0; x < length; x++)
		printf("%d ", numbers[x]);
	printf("\n");

	/* sorting */
	bubble_sort(numbers, length);

	printf("After sorting: ");
	for (int x = 0; x < length; x++)
		printf("%d ", numbers[x]);
	printf("\n");

	return 0;
}

