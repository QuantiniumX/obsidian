**Bubble Sort** or **sinking algorithm** is a simple sorting algorithm that repeatedly steps through the input list element by element, comparing the current element with the one after it, swapping their values if needed.

It's general approach is **bubble up the highest element** and **push it to the last** and **decrease the length** by one so for next iteration the length of array is less as we have already put the largest element at the end.

## Step by Step example
Take an array of numbers [5 1 4 2 8]

### First Pass
```
    ( 5 1 4 2 8 ) → ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.
    ( 1 5 4 2 8 ) → ( 1 4 5 2 8 ), Swap since 5 > 4
    ( 1 4 5 2 8 ) → ( 1 4 2 5 8 ), Swap since 5 > 2
    ( 1 4 2 5 8 ) → ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.
```
### Second Pass
```
    ( 1 4 2 5 8 ) → ( 1 4 2 5 8 )
    ( 1 4 2 5 8 ) → ( 1 2 4 5 8 ), Swap since 4 > 2
    ( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
    ( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
```

Now, the array is already sorted, but the algorithm does not know if it is completed. The algorithm need one more pass without any swaps to check if it is fully sorted.

### Third Pass
```
    ( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
    ( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
    ( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
    ( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
```

![](https://youtu.be/Cq7SMsQBEUw?feature=shared)

## Pseudocode implementation
Pseudocode for [bubble sort](https://en.wikipedia.org/wiki/Bubble_sort#Pseudocode_implementation)
```
Procedure bubble_sort(nums):
    Set swapping to True
    Set end to the length of nums
    While swapping is True:
        Set swapping to False
        For i from the 2nd element to end:
            If the (i-1)th element of nums is greater than the ith element:
                Swap the (i-1)th element and the ith element of nums
                Set swapping to True
        Reduce end by one
    Return nums
End Procedure
```

**Optimization** The bubble sort algorithm can be optimized by observing that the n-th pass finds the n-th largest element and puts it into its final place. So, the inner loop can avoid looking at the last n − 1 items when running for the n-th time: 

```
procedure bubbleSort(A : list of sortable items)
    n := length(A)
    repeat
        swapped := false
        for i := 1 to n - 1 inclusive do
            if A[i - 1] > A[i] then
                swap(A[i - 1], A[i])
                swapped := true
            end if
        end for
        n := n - 1
    until not swapped
end procedure
```

## Performance
### Time Complexity
- **Worst Case** - O(N^2)
- **Average Case** - O(N^2)
- **Best Case** - O(N) With optimized implementation

It's complexity is quadratic as due to two iteration on the arrays.

### Space Complexity
- **Complexity** - O(1)

It's complexity is constant as it doesn't need more space than which the array has been allocated in. It just moves the elements in that space only.


## Extras
- **[Use](https://en.wikipedia.org/wiki/Bubble_sort#Use)**
- **[Variations](https://en.wikipedia.org/wiki/Bubble_sort#Variations)

