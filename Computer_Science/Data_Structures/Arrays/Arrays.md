**Array** is a linear data structure where all elements are arranged sequentially. It is a collection of elements of same data type stored at contiguous memory locations. 

## Array usage
An array value is accessed or modified using index. Ex. arr[0]. In C the value is accessed using the formula:
(address of arr + index * size of the datatype of the array) - This works because arr[0] is just the address of the first element so just with basic maths we can calculate value at any given index as the memory is just contiguous.

## Efficiency
- Accessing data - O(1)
- Modifying data - O(1)
- Deleting the index at end - O(1)
- Deleting the element at start - O(N)

NOTE: Arrays are PEAK.
