**Merge Sort** is a recursive sorting algorithm and it's quite bit faster than bubble sort. It is a [stable sort](https://en.wikipedia.org/wiki/Category:Stable_sorts). It is a [divide and conquer algorithm](https://en.wikipedia.org/wiki/Divide-and-conquer_algorithm) that was invented by [John von Neumann](https://en.wikipedia.org/wiki/John_von_Neumann)

## Divide and Conquer
- Divide: divide the large problem into smaller problem and recursively solve the smaller problems.
- Conquer: Combine the portion of the small solved problem and get the answer.

## Algorithm
- Divide the unsorted list into n sublists, each containing one element (a list of one element is considered sorted)
- Repeatedly merge sublists to produce new sorted sublists until there is only one sublist remaining. This will be the sorted list.

The Algorithm consists of two separate functions, merge sort and merge. merge_sort() divides the input array into two halves, calls itself for the two halves and then merges the two sorted parts.

The merge() function is used to merge two sorted arrays back into one. At lowest level of recursion, the two "sorted" list will have the length of 1. Those single elements will be merged into a sorted array of length two, and we can further build from there.

### Merge_Sort Function
input: A array of numbers

1. If the length of array is less than 2, it is already sorted so return array. Array consisting of only on elements is already sorted.
2. Split the input array into two halves down the middle.
3. Call merge_sort() twice. once on each half
4. Return the result of calling merge(sorted_left_side, sorted_right_side) on the result of the merge_sort() call.

### Merge Function
input: left and right half of the array

1. Create a new "final" array of integers.
2. Set i and j equal to 0.
3. Use a loop to iterate over left and right. If one element of left is smaller than equal to right element then add it to the final list and increment i. Otherwise add the item to final and increment j.
4. Now put the leftover of left and right array into the final respectively.
5. return final.

![](https://storage.googleapis.com/qvault-webapp-dynamic-assets/course_assets/oMbHRV9.gif)

## Implementation
### Top-dowm Implementation

```
def merge(first, second):
    final = []
    i = j = 0
    while i < len(first) and j < len(second):
        if first[i] <= second[j]:
            final.append(first[i])
            i += 1
        else:
            final.append(second[j])
            j += 1

    final.extend(first[i:])
    final.extend(second[j:])
    return final


def merge_sort(arr):
    if len(arr) < 2:
        return arr

    mid = len(arr) // 2
    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid:])

    return merge(left, right)
```

## Analysis
In sorting n objects, Merge sort has average and worst case of O(NlogN). In worst case merge sort uses approximately 39% fewer comparisons than [[quicksort.md]] does in average case and in terms of moves, Merge sort worst case complexity is O(NlogN) equal to quicksort best case.

Merge Sort is more efficient than quicksort for some types of lists if the data to be stored is can only be efficiently accessed sequentially. Unlike some (efficient) implementation of quicksort, merge sort is a **stable sort**.
### Time Complexity
- **Worst Case** - O(NlogN)
- **Average Case** - O(NlogN)

### Space Complexity 
- **Complexity** - O(N)

## Comparison With Other sorting algorithms
- Heapsort has the same time bounds as merge sort, it requires only O(1) auxiliary space instead of merge sort O(N).
- On typical modern system, quicksort outperforms merge sort for sorting ram-based arrays [source](https://www.sciencedirect.com/science/article/pii/S1877050920312667/pdf)
- Quicksort is preffered when the data is size is somewhat smaller. According to a [paper](https://www.sciencedirect.com/science/article/pii/S1877050920312667/pdf) it is near 400, but your mileage may vary.it helps in utilizing cache locality better than merge sort (with space complexity O(n)).
- Merge Sort is a stable sort and is more efficient at handling slow-to-access sequential media.
- Merge Sort is the best to sort a linked list as it is relatively easy to implement a merge sort and it requires auxiliary space of O(1) extra space and the slow-to-access performance of linked list makes the some other algorithm (such as quicksort)  perform poorly or others(such as heapsort) completely possible.

## To Read
- [Different Merge Sort implementation](https://en.wikipedia.org/wiki/Merge_sort#Algorithm)
- [Optimizing Merge Sort](https://en.wikipedia.org/wiki/Merge_sort#Optimizing_merge_sort)
- [Parallel Merge Sort](https://en.wikipedia.org/wiki/Merge_sort#Parallel_merge_sort)
- [Comparing Merge Sort and QuicKSort](https://www.sciencedirect.com/science/article/pii/S1877050920312667/pdf)
- [In place merge sort](https://en.wikipedia.org/wiki/Merge_sort#In-place_merge_sort)
