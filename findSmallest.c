int findSmallest(int *arr, int size) {
  // Initialize the minimum number with the first element
  int min = arr[0];

  // Iterate through the array and find the smallest number
  for (int i = 1; i < size; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  // Return the smallest number
  return min;
}

// This algorithm takes an array of integers and its size as input, and returns the smallest number in the array. It uses a loop to iterate through the array and keep track of the minimum number seen so far. At the end, it returns the minimum number.

// To use this algorithm, you can simply call it with the array and its size as arguments, like this:

int arr[] = {3, 5, 1, 7, 9, 2};
int size = 6;
int min = findSmallest(arr, size);

// This will call the findSmallest() function with the arr array and its size of 6, and it will return the smallest number in the array, which is 1.

// I hope this helps! Let me know if you have any questions or need further clarification.