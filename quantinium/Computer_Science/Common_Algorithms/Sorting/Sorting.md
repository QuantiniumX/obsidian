Sorting refers to ordering data in an increasing or decreasing manner according to some linear relationship among the data items.

## Common Sorting algorithm
- **Bubble/Shell sort**: Exchange two adjacent elements if they are out of order. Repeat until array is sorted.
- **Insertion sort**: Scan successive elements for an out-of-order item, then insert the item in the proper place.
- **Selection sort**: Find the smallest (or biggest) element in the array, and put it in the proper place. Swap it with the value in the first position. Repeat until array is sorted.
- **Quick sort**: Partition the array into two segments. In the first segment, all elements are less than or equal to the pivot value. In the second segment, all elements are greater than or equal to the pivot value. Finally, sort the two segments recursively.
- **Merge sort**: Divide the list of elements in two parts, sort the two parts individually and then merge it.

## Language Implementation
- As of Perl 5.8, merge sort is its default sorting algorithm (it was quicksort in previous versions of Perl).
- In Java, the Arrays.sort() methods use merge sort or a tuned quicksort depending on the datatypes and for implementation efficiency switch to insertion sort when fewer than seven array elements are being sorted.
- The Linux kernel uses merge sort for its linked lists.
- [Timsort](https://en.wikipedia.org/wiki/Timsort), a tuned hybrid of merge sort and insertion sort is used in variety of software platforms and languages including the Java and Android platforms and was previously used by Python from version 2.3 to version 3.10.
- Before [LWG713](https://cplusplus.github.io/LWG/issue713) the complexity requirement allowed sort() to be implemented using only [quicksort](https://en.wikipedia.org/wiki/Quicksort). After LLVM 14, after corrected time complexity, it started using [introsort](https://en.wikipedia.org/wiki/Introsort) that is a hybrid sorting algorithm that provides both fast average performance and (asymptotically) optimal-worst case performance. It begins with quicksort, it switched to heapsort when the recursion depth exceeds a level( based on log of the number of elements being sorted) and switches to insertion sort when the number of elements is below some threshold.
