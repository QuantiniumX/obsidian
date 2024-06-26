**Interpolation search** is an improved variant of binary search, designed for searching in sorted arrays where the values are uniformly distributed. It works by estimating the position of the target value based on the distribution of values in the array.
The key idea is to use linear interpolation to guess where the target value might be, rather than always choosing the middle element as in binary search. This can lead to faster searches, especially for large datasets with uniformly distributed values.

## Pseudo code
```
function interpolationSearch(arr, target):
    low = 0
    high = arr.length - 1
    
    while low <= high and target >= arr[low] and target <= arr[high]:
        if low == high:
            if arr[low] == target:
                return low
            return -1
        
        pos = low + ((target - arr[low]) * (high - low)) // (arr[high] - arr[low])
        
        if arr[pos] == target:
            return pos
        
        if arr[pos] < target:
            low = pos + 1
        else:
            high = pos - 1
    
    return -1
```

## Analysis
- **Best Case**: O(1) - When the target is found at the first estimated position.
- **Average Case**: O(log(log n)) - For uniformly distributed data.
- **Worst Case**: O(n) - When the distribution is highly skewed or when the target is not in the array.
