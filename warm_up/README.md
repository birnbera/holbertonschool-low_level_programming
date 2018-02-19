# Warm Up
Couple of exercises to get the algorithm juices flowing

### 0. Binary search
Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
- Prototype: `int binary_search(int *array, size_t size, int value);`
- Where array is a pointer to the first element of the array to search in
- `size` is the number of elements in array
- And `value` is the value to search for
- Your function must return the index where value is located
- You can assume that `array` will be sorted in ascending order
- You can assume that `value` won’t appear more than once in `array`
- If value is not present in `array` or if `array` is `NULL`, your function must return `-1`
- Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)
- The prototypes of all your functions should be included in your header file called `search_algos.h`
- You are only allowed to use the `printf` function of the standard library. Any call to another function like `strdup`, `malloc`, … is forbidden.

### 1. Is full
Write a function that checks if a binary tree is full
- Prototype: `int binary_tree_is_full(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to check
- If `tree` is `NULL`, your function must return `0`
- You are allowed to use the standard library
