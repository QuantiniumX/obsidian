Quicksort is a [divide-and-conquer algorithm](https://en.wikipedia.org/wiki/Divide-and-conquer_algorithm) . It is a efficient sorting algorithm that's widely used in production sorting implementations.

## Algorithm
### Divide
- Select a pivot element that will preferably end up close to the center of the sorted pack
- Move everything onto the "greater than" or "less than" side of the pivot
- The pivot is now in its final position
- Recursively repeat the operation on both sides of the pivot

### Conquer
- The array is sorted after all elements have been through the pivot operation

Quicksort is implementated using two functions quicksort() and partition().

### Quicksort(arr, low, high)
1. Loop while low is less that high.
    1. partition the input list using partition() function.
    2. Recursively call quicksort on left side of list.
    3. Recursively call quicksort on right side of list.

### partition(arr, low, high)
1. Set pivot to a random element. Generally last.
2. set i to low.
3. For each index j from low to high
    1. if the element at index j is less than the pivot.
        1. swap the element at index i and index j.
        2. increment i by 1.
4. Swap the element at index i with the element at index high.
5. return the index i.

## Pseudocode
```
// Sorts a (portion of an) array, divides it into partitions, then sorts those
algorithm quicksort(A, lo, hi) is 
  // Ensure indices are in correct order
  if lo >= hi || lo < 0 then 
    return
    
  // Partition array and get the pivot index
  p := partition(A, lo, hi) 
      
  // Sort the two partitions
  quicksort(A, lo, p - 1) // Left side of pivot
  quicksort(A, p + 1, hi) // Right side of pivot

// Divides array into two partitions
algorithm partition(A, lo, hi) is 
  pivot := A[hi] // Choose the last element as the pivot

  // Temporary pivot index
  i := lo

  for j := lo to hi - 1 do 
    // If the current element is less than or equal to the pivot
    if A[j] <= pivot then 
      // Swap the current element with the element at the temporary pivot index
      swap A[i] with A[j]
      // Move the temporary pivot index forward
      i := i + 1

  // Swap the pivot with the last element
  swap A[i] with A[hi]
  return i // the pivot index
```

## Visuals 
![](https://www.youtube.com/watch?v=8hEyhs3OV1w)

## Analysis
### Worst case
The most unbalanced partition occurs when one of the sublists returned by the partitioning routine is of the size (n - 1). This may occur if the pivot happens to be the smallest or the largest element in the list, or in some implementations when all the elements are equal.

If this happens repeatedly in every partition, then each recursive call processes a list of size one less than the previous list. Consequently, we can make (n - 1) nested calls before we reach a list of size 1. This leads to call tree be a linear chain of (n - 1) nested calls. Therefore in that case the quicksort takes O(N^2) time.

### Best Case
In the most balanced case, each time we perform partition, we divide the list into nearly two equal pieces. This means each recursive call processes a list of half the size. This means the depth of the call tree is (LogN). Since each level of calls need only O(N) time all together. The result is an algorithm that uses only O(NlogN).

### Average Case
To sort an array of n distinct elements, quicksort takes O(n log n) time in expectation, averaged over all n! permutations of n elements with equal probability.

[READ MORE](https://en.wikipedia.org/wiki/Quicksort#Formal_analysis)

### Space complexity
- In-place version of quicksort has space complexity of O(LogN) using the tail-call recursion given. In worst case, if tail-call recursion is not used then, the worst case quicksort could make O(N) nested recursive calls and need O(N) auxiliary space.

## Fixing Quicksort
### Choice of Pivot
As we discussed, in the worst case, out implementation of quicksort takes the last element as the pivot but if by chance the last element is the smallest element in the array, then it'll lead to the worst case scenario we discussed above and the quicksort time complexity will increase to O(N^2).

To solve this problem we can choose a random index and the median as the pivot.

#### Random Approach 
The random approach is easy to code, works practically all the time and as such is often used. 

The idea is to quickly shuffle the list before sorting it. The likelyhood of shuffling a sorted array is low and it becomes lower the larger the input.

#### Median Approach
One of the most popular solutions is to use the "median of three" approach. Three elements( for example: the first, middle and last elements) of each partition are chosen and the median is found between them. That item is then used as the pivot.

This approach has the advantage that it can't break down to O(N^2) time because we guaranteed to never use the worst item in the partition as pivot. That said it can still be slower as true median is not chosen.

### Repeated Elements
As we already discussed above that quicksort exhibits poor performance for input that may contain similar elements.

To solve this (Also known as Lomuto problem), an alternative linear-time partition routine can be used that seperates the values into three groups: The ones smaller than pivor, the ones equal to pivot and the ones larger than the pivot. 

With this we only need to solve the elements smaller and larger than the pivot. Bentley and McIlroy call this the "fat partition" and it is implemented as qsort() of version 7 of Unix.

## Why Use Quicksort
### Pros:
- Very fast in the average case
- In-Place: Saves on memory, doesn't need to do a lot of copying and allocating

### Cons:
- More complex implementation
- Typically unstable: changes the relative order of elements with equal keys

## To read
- [Optimization](https://en.wikipedia.org/wiki/Quicksort#Optimizations)
- [Formal Analysis](https://en.wikipedia.org/wiki/Quicksort#Formal_analysis)
- [Relation To Other Alogrithms](https://en.wikipedia.org/wiki/Quicksort#Relation_to_other_algorithms)


