Like in bubble sort, We took the largest element to the end. In selection sort we find the smallest element in the whole list and put that element in the front of the list.

## Pseudocode
```
For each index:
    Set smallest_idx to the current index
    For each index from smallest_idx+1 to the end of the list:
        If the number at the inner index is smaller than the number at smallest_idx, set smallest_idx to the inner index
    Swap the number at the current index with the number at smallest_idx
```

![](https://youtu.be/92BfuxHn2XE?feature=shared)

## Analysis
### Time Complexity
- **Best Case** - O(N^2). Array is already sorted.
- **Average Case** - O(N^2). Elements are in random order.
- **Worst Case** - O(N^2). Array is reverse sorted.

### Space Complexity
- **Complexity** - O(1). No extra space is taken due to in-place swapping.
