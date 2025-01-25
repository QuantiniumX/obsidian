def ternary_search(arr, low, high, target):
    if high >= low:
        mid1 = low + (high - low) // 3
        mid2 = high - (high - low) // 3

        if arr[mid1] == target:
            return mid1
        if arr[mid2] == target:
            return mid2

        if target < arr[mid1]:
            return ternary_search(arr, low, mid1 - 1, target)
        elif target > arr[mid2]:
            return ternary_search(arr, mid2 + 1, high, target)
        else:
            return ternary_search(arr, mid2 + 1, mid1 - 1, target)

    return -1

arr = [1, 2, 8, 9, 12, 27, 28, 37, 47, 89]
tar = 28

result = ternary_search(arr, 0, len(arr) - 1, tar)

if result != -1:
    print(f"Element {tar} is present at index {result}.")
else:
    print(f"Element {tar} is not present in the array.")
