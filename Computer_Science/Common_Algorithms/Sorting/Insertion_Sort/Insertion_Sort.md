**[Insertion sort](https://en.wikipedia.org/wiki/Insertion_sort)** is a simple sorting algorithm that builds the final sorted array (or list) one item at a time by comparisons. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, insertion sort provides several advantages:
1. Simple Implementation: [Jon Bentley](https://en.wikipedia.org/wiki/Jon_Bentley_(computer_scientist) shows a three line C/C++ version that is 5 line when optimized.
2. Fast for very small dataset.
3. Faster than any other simple sorting algorithm like Bubble sort.
4. Stable: Doesn't change the relative order of the elements with equal keys.
5. In-Place: Only requires a constant amount of memory.
6. Online: Can Sort an list as it receives it.

![](https://www.youtube.com/watch?v=8oJS1BMKE64})

## Pseudocode 
```
i ← 1
while i < length(A)
    j ← i
    while j > 0 and A[j-1] > A[j]
        swap A[j] and A[j-1]
        j ← j - 1
    end while
    i ← i + 1
end while
```

After expanding the swap operation as in-place
```
i ← 1
while i < length(A)
    x ← A[i]
    j ← i
    while j > 0 and A[j-1] > x
        A[j] ← A[j-1]
        j ← j - 1
    end while
    A[j] ← x[3]
    i ← i + 1
end while
```

## Analysis
### Time Complexity
- **Best Case** - O(N). if the array is already sorted.
- **Worst Case** - O(N^2). If the arrays is reverse sorted.
- **Average Case** - O(N^2). Even with quadratic time Complexity it is really fast to sort smaller datasets.

### Space Complexity
- **Complexity** - O(1). Due to in-place swaps, it doesnt need any other space allocated like merge sort.
